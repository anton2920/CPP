#include "libs.hpp"

int getWay() {

    /* Initializing variables */
    int way;

    /* Main part */
    for (;;) {
        try {
            std::cout << "Choose input stream: \n" <<
                      "\t1) std::cin\n" <<
                      "\t2) input.txt\n" <<
                      "\nAnswer: ";
            std::cin >> way;
            break;
        } catch (...) {
            std::cerr << "Bad input!\n" << std::flush;
        }
    }

    /* Returning value */
    return way;
}

void readList(std::istream &in, std::list<pharmacy> &l) {

    /* Initializing variables */
    pharmacy drug;

    /* I/O flow */
    std::cout << "This function will read your items until it's EOF\n";

    for ( ; !in.eof(); ) {
        std::cout << "\t\t----\t----\t----\t----\n";
        in >> drug;
        std::cout << "\t\t----\t----\t----\t----\n\n";

        l.push_back(drug);
    }
}

void printList(std::ostream &out, const std::list<pharmacy> &l) {

    /* I/O flow */
    for (auto & i : l) {
        out << i << std::endl;
    }
}

void task_1(const std::list<pharmacy> &l) {

    /* Initializing variables */
    pharmacy::date hy(0, 6, 0);
    pharmacy::date sys;
    sys.getSystemTime();
    pharmacy::date first_diff;

    /* Main part */
    for (auto & i : l) {
        first_diff = (i.getProdDate() + i.getExpiration() * 30) <= sys ?
                sys - (i.getProdDate() + i.getExpiration() * 30) :
                (i.getProdDate() + i.getExpiration() * 30) - sys;
        if (first_diff <= hy) {
            std::cout << "Product " << i.getName() << " will expire in half a year\n";
        }
    }

    /* Final output */
    std::cout << std::endl;
}

void task_2(const std::list<pharmacy> &l) {

    /* Initializing variables */
    std::string curr_type = l.begin()->getType();
    double mean = 0.0;
    std::size_t quan = 0;

    /* Main part */
    for (auto & i : l) {
        if (i.getType() == curr_type) {
            mean += i.getPrice();
            ++quan;
        } else {
            std::cout << "For type " << curr_type << " average price equals to " << mean / quan << std::endl;
            mean = i.getPrice();
            quan = 1;
            curr_type = i.getType();
        }

    }

    /* Final output */
    std::cout << "For type " << curr_type << " average price equals to " << mean / quan << std::endl;
}