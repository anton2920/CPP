#include <iostream>

#include "slau.hpp"

const double omega = 1.0;

int main() {

    /* Initializing variables */
    std::size_t size, iterations;

    /* I/O flow */
    for (;;) {
        try {
            std::cout << "Type size: ";
            std::cin >> size;
            break;
        } catch (...) {
            std::cerr << "Wrong size!\n" << std::flush;
        }
    }

    slau a(size);

    a.read();

    iterations = a.sor(omega);

    a.printSolution(iterations, std::cout);

    /* Returning value */
    return 0;
}