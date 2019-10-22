#include <iostream>
#include <fstream>
#include <list>

#include "libs/libs.hpp"
#include "libs/pharmacy.hpp"

int main() {

    /* Initializing variables */
    std::list<pharmacy> l;
    std::ifstream inp("input.txt");
    std::ofstream outp("output.txt");

    int way = getWay();

    /* I/O flow */
    if (!inp.is_open() || !outp.is_open()) {
        throw std::ios_base::failure("inp hasn't opened");
    }
    readList((way == 1) ? std::cin : inp, l);

    l.sort();

    printList(outp, l);

    task_1(l);
    task_2(l);

    /* Returning value */
    return 0;
}