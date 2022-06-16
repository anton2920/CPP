#include <iostream>

/* 0-1 0/1 knapsack problem */

#define ENDING(i) ((i == 1) ? "st" : (i == 2) ? "nd" : (i == 3) ? "rd" : "th")

typedef int weight_t;
typedef int value_t;

struct item_t {
    weight_t weight;
    value_t value;
};

std::size_t fill_in(item_t *items[]);
value_t knapsack(const item_t *items, std::size_t n, weight_t max_w);
void print_table(value_t **table, std::size_t n, weight_t max_w);
void print_items(const item_t *items, std::size_t n);

int main()
{
    /* Initializing variables */
    item_t *items;
    std::size_t n;
    weight_t max_w;

    try {

        /* Fill in items */
        n = fill_in(&items);

        std::cout << "\nType knapsack capacity: ";
        std::cin >> max_w;

        /* Main part */
        auto ans = knapsack(items, n, max_w);
        std::cout << std::endl << "Answer: $" << ans << std::endl;

        print_items(items, n);

        delete[](items);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return -1;
    }

    /* Returning value */
    return 0;
}

std::size_t fill_in(item_t *items[])
{
    /* Initializing variables */
    std::size_t n;

    /* I/O flow */
    std::cout << "Type the number of items: ";
    std::cin >> n;

    *items = new item_t[n];

    for (std::size_t i = 0; i < n; ++i) {
        std::cout << "\t" << "==== " << i + 1 << ENDING(i + 1) << " item" << " ====\n";
        std::cout << "Type weight: ";
        std::cin >> (*items + i)->weight;
        std::cout << "Type value: ";
        std::cin >> (*items + i)->value;
    }

    /* Returning value */
    return n;
}

value_t knapsack(const item_t *items, std::size_t n, weight_t max_w)
{
    /* Initializing variables */
    value_t **table;
    const item_t *curr_item;
    value_t ans;

    /* Main part */

    /* Allocating memory */
    table = new value_t *[n + 1];
    for (std::size_t i = 0; i <= n; ++i) {
        table[i] = new value_t[max_w + 1];
    }

    /* Fill up 0th row with zeros:
     * We cannot put zero items into bag.
     * Thus total value is zero
     */
    for (std::size_t w = 0; w <= max_w; ++w) {
        table[0][w] = 0;
    }

    /* Filling rest of the table */
    for (std::size_t i = 1; i <= n; ++i) {
        for (weight_t w = 0; w <= max_w; ++w) {
            curr_item = items + i - 1;
            if (w < curr_item->weight) {
                table[i][w] = table[i - 1][w];
            } else {
                /* Maximum of
                 * [value when current item is excluded]
                 * and
                 * [value when current item is included]
                 */
                table[i][w] = std::max(table[i - 1][w], curr_item->value + table[i - 1][w - curr_item->weight]);
            }
        }
    }

    ans = table[n][max_w];

    /* Printing table for better understanding */
    print_table(table, n, max_w);

    /* Releasing memory */
    for (std::size_t i = 0; i <= n; ++i) {
        delete[](*(table + i));
    }
    delete[](table);

    return ans;
}

void print_table(value_t **table, std::size_t n, weight_t max_w)
{
    /* Printing header */
    std::printf("   ");
    for (weight_t w = 0; w <= max_w; ++w) {
        std::printf("%3d", w);
    }
    std::printf("\n");

    for (std::size_t i = 0; i <= n; ++i) {
        std::printf("%2lu:", i);
        for (weight_t w = 0; w <= max_w; ++w) {
            std::printf("%3d", table[i][w]);
        }

        std::printf("\n");
    }
}

void print_items(const item_t *items, std::size_t n)
{
    /* I/O flow */
    for (std::size_t i = 0; i < n; ++i) {
        std::printf("┌──────┐\n"
                    "| #%3lu |\n"
                    "├──────┤\n"
                    "│ %2dkg │\n"
                    "│ $%3d │\n"
                    "└──────┘\n\n",
                    i + 1, items[i].weight, items[i].value);
    }
}
