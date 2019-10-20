#include <iostream>

#include "libs/fraction.hpp"
#include "libs/vector.hpp"

int main() {

    /* Initializing variables */
    lab::fraction a(1, 2);
    lab::fraction b(1, 3);
    lab::fraction c;

    /* Main part */
    c = a + b;
    std::cout << "a + b = ";
    c.print(std::cout);

    c = a - b;
    std::cout << "\na - b = ";
    c.print(std::cout);

    c = a * b;
    std::cout << "\na * b = ";
    c.print(std::cout);

    c = a / b;
    std::cout << "\na / b = ";
    c.print(std::cout);
    std::cout << std::endl;

    /* Final output */
    std::cout << std::endl;

    /* Returning value */
    return 0;
}