#include <iostream>

#include "predator.hpp"

int main() {

    /* Initializing variables */
    predator p;
//    predator p("Lion", animal::Asia, 10, 5);
    srand(time(nullptr) / 2);

    /* I/O flow */
    std::cin >> p;
    std::cout << std::endl << p;

    p.setAspeed(rand());
    p.setAlifeT(rand());

    std::cout << "\n\nAfter some magic...\n" << p;

    /* Returning value */
    return 0;
}