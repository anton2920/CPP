#include <iostream>

#include "libs.hpp"

int main() {

    /* Initializing variables */
    date d[2], dcurr;

    /* I/O flow && VarCheck */
    do {
        std::cout << "\nType first date: \n";
        std::cin >> d[0];
        std::cout << "\nType second date: \n";
        std::cin >> d[1];
    } while (!(d[0] <= d[1]));

    dcurr.getSystemTime();

    /* Final output */
    std::cout << std::endl << ((d[0] <= dcurr && dcurr <= d[1]) ? "Correct date" : "Wrong date") << std::endl;

    /* Returning value */
    return 0;
}