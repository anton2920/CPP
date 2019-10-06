#include <iostream>

#include "libs2/student.hpp"

enum errors {
    TOO_LARGE_SIZE = 6585
};

int main() {

    /* Initializing variables */
    std::size_t size;

    /* I/O flow && VarCheck */
    for (;;) {
        try {
            std::cout << "Type size of the array: ";
            std::cin >> size;

            if (size > 100) {
                throw errors::TOO_LARGE_SIZE;
            } else {
                break;
            }
        } catch (int err) {
            if (err == errors::TOO_LARGE_SIZE) {
                std::cerr << "Size must be less than 100\n";
            } else {
                std::cerr << "Other problems with size!\n";
            }
            std::cerr.flush();
        }
    }

    auto arr = new student[size];

    /* Returning value */
    return 0;
}