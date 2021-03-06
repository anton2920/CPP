#include "libs.hpp"

void readVec(std::vector<double> &array, std::size_t nelem) {

    /* Initializing variables */
    double tmp;

    /* I/O flow */
    for (size_t i = 0; i < nelem; ++i) {
        std::cout << "| Type " << i << ENDING(i) << " element: ";
        std::cin >> tmp;
        array.push_back(tmp);
    }

    /* Final output */
    prt_ln();
}

void randVec(std::vector<double> &array, std::size_t nelem) {

    /* Initializing variables */
    int leftBnd = 0, rightBnd = RAND_MAX;

    /* I/O flow */
    std::cout << "| Type left bound: ";
    std::cin >> leftBnd;

    do {
        std::cout << "| Type right bound: ";
        std::cin >> rightBnd;
    } while (rightBnd < leftBnd);

    /* Main part */
    for (size_t i = 0; i < nelem; ++i) {
        array.push_back((std::rand() % (rightBnd - leftBnd + 1)) + leftBnd);
    }

    /* Final output */
    prt_ln();
}

bool fileVec(std::vector<double> &array, std::size_t nelem) {

    /* Initializing variables */
    std::ifstream inputs;
    std::string filename;
    int func;
    double tmp;

    /* Main part */
    for (;;) {
        std::cout << "| Type filename: ";
        std::cin >> filename;

        inputs.open(filename, std::ios_base::in);
        if (inputs.is_open()) {
            for (size_t i = 0; i < nelem; ++i) {
                inputs >> tmp;
                array.push_back(tmp);
                if (inputs.eof()) {
                    inputs.close();
                    prt_ln();
                    std::cout.flush();
                    return false;
                }
            }
            break;
        } else {
            func = promtMsg("| Error! File can't be opened!\n");
            switch (func) {
                case 1:
                    exit(2);
                case 2:
                    continue;
                case 3:
                    return false;
                default:
                    break;
            }
        }
    }
    inputs.close();

    /* Final output */
    prt_ln();
    std::cout.flush();

    /* Returning value */
    return true;
}

/* Assume: array is sorted in ascending order */
void task_14(std::vector<double> &array) {

    /* Initializing variables */
    std::size_t i;

    /* Main part */
    for (i = 0; i < array.size() && array[i] < 0; ++i)
        ;

    array.erase(array.begin() + i, array.end());
}

/* Assume: array is sorted in ascending order */
void task_19(std::vector<double> &array) {

    /* Initializing variables */
    std::size_t count = 0;
    double mean = 0;

    /* Main part */
    for (std::size_t i = 0; i < array.size(); ++i) {
        if (!(static_cast<int>(array[i]) & 1)) { /* number is even */
            mean += array[i];
            ++count;
        }
    }

    array.insert(array.begin() + 1, mean / count);
}

void task_4(std::vector<double> &array, int (*cmp)(const void *, const void *)) {

    /* Main part */
    std::qsort((void *) array.data(), array.size(), sizeof(double), cmp);
}

int task_4_cmp(const void *aa1, const void *aa2) {

    /* Initializing variables */
    auto *a1 = (double *) aa1, *a2 = (double *) aa2;

    /* Main part */
    if (std::abs(*a1) <= 1 && std::abs(*a2) > 1) {
        return -1;
    } else if (std::abs(*a1) > 1 && std::abs(*a2) <= 1) {
        return 1;
    } else {
        return 0;
    }
}

void task_9(std::vector<double> &array) {

    /* Initializing variables */
    double max_max = 0;

    /* Main part */
    for (double i : array) {
        if (i - std::floor(i) > max_max) {
            max_max = i - std::floor(i);
        }
    }

    for (double &i : array) {
        if (i - std::floor(i) > max_max - EPS && i - std::floor(i) < max_max + EPS) {
            i = 0;
        }
    }

}

bool write_to_file(std::vector<double> &array, const char *name) {

    /* Initializing variables */
    std::ofstream outputs(name);
    int func;

    /* Main part */
    for (;;) {
        if (outputs.is_open()) {
            for (double i : array) {
                outputs << i << " ";
            }
            break;
        } else {
            func = promtMsg("| Error! File can't be opened!\n");
            switch (func) {
                case 1:
                    exit(2);
                case 2:
                    continue;
                case 3:
                    return false;
                default:
                    break;
            }
        }
    }

    /* Returning value */
    return true;
}

void write_vector(const char *str, std::vector<double> &array) {

    /* Initializing variables */
    std::size_t i;

    /* I/O flow */
    std::cout << str;
    for (i = 0; i < array.size(); ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
