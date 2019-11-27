#include <iostream>

#include "st_pr.hpp"
#include "csas.hpp"
#include "cts.hpp"
#include "is.hpp"

int main() {

    /* Initializing variables */
    study_program::st_pr *stpr[3];

    stpr[0] = new study_program::csas;
    stpr[1] = new study_program::cts;
    stpr[2] = new study_program::is;

    /* I/O flow */
    for (auto & i : stpr) {
        std::cin >> *i;
        std::cout << std::endl;
    }

    for (auto & i : stpr) {
        std::cout << typeid(*i).name() << std::endl <<  *i << std::endl << std::endl;
    }

    /* Final output */
    std::cout << "The abandoned students are Pavlov, Trusov, Tsarukyan, ...\n";

    /* Returning value */
    return 0;
}