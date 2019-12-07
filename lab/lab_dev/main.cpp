#include <iostream>
#include <vector>

#include "libs/st_pr.hpp"
#include "libs/csas.hpp"
#include "libs/cts.hpp"
#include "libs/is.hpp"

int menu();

int main() {

    /* Initializing variables */
    int choice1, choice2;

    /* I/O flow */
    std::cout << "Type the number of elements: ";
    std::cin >> choice1;

    study_program::st_pr *stpr = new study_program::st_pr[choice1];

    for (int i = 0; i < choice1; ++i) {
        switch ((choice2 = menu())) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            default:
                break;
        }

        if (!choice2) {
            break;
        }

    }

    for (auto & i : v) {
        std::cout << typeid(i).name() << std::endl << i << std::endl << std::endl;
    }

    /* Final output */
    std::cout << "The abandoned students are Pavlov, Trusov, Tsarukyan, ...\n";

    /* Returning value */
    return 0;
}

int menu() {

    /* Initializing variables */
    int choice;

    /* I/O flow */
    std::cout << "Choose one option: \n" << "\t1) Create computer science and software [csas]\n"
              << "2) Create computer technologies and systems\n" << "3) Create information security\n\n"
              << "0) Proceed to results\n\n";

    std::cout << "Answer: ";

    std::cin >> choice;

    /* Returning value */
    return choice;
}