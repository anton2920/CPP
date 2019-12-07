#include <iostream>
#include <vector>

#include "st_pr.hpp"
#include "csas.hpp"
#include "cts.hpp"
#include "is.hpp"

int menu();

int main() {

    /* Initializing variables */
    int choice;
    std::vector<study_program::st_pr> v;
    study_program::csas *tmp1;
    study_program::cts *tmp2;
    study_program::is *tmp3;

    /* I/O flow */
    for ( ;; ) {
        switch ((choice = menu())) {
            case 1:
                tmp1 = new study_program::csas;
                std::cin >> *tmp1;
                v.push_back(*tmp1);
                break;
            case 2:
                tmp2 = new study_program::cts;
                std::cin >> *tmp2;
                v.push_back(*tmp2);
                break;
            case 3:
                tmp3 = new study_program::is;                
                std::cin >> *tmp3;
                v.push_back(*tmp3);
                break;
            default:
                break;
        }

        if (!choice) {
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