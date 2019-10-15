#include <iostream>

#include "slau.hpp"

int main() {

    /* Initializing variables */
    std::size_t size, iterations;
    double omega, eps;

    /* I/O flow */
    for (;;) {
        try {
            std::cout << "Type size: ";
            std::cin >> size;
            if (size > 100) {
                throw std::range_error("size");
            }
            break;
        } catch (...) {
            std::cerr << "Wrong size!\n" << std::flush;
        }
    }

    for (;;) {
        try {
            std::cout << "Type omega: ";
            std::cin >> omega;
            if (omega <= 0 || omega >= 2) {
                throw std::range_error("omega");
            }
            break;
        } catch (...) {
            std::cerr << "This method only converges if 0 < omega < 2\n" << std::flush;
        }
    }

    for (;;) {
        try {
            std::cout << "Type epsilon (accuracy coefficient): ";
            std::cin >> eps;
            break;
        } catch (...) {
            std::cerr << "Something went wrong\n" << std::flush;
        }
    }

    slau a(size);

    a.read();

    iterations = a.sor(omega, eps);

    if (iterations != -1) {
        a.printSolution(iterations, std::cout);
    }

    /* Returning value */
    return 0;
}