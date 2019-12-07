#include <iostream>
#include <vector>

#include "libs/st_pr.hpp"
#include "libs/csas.hpp"
#include "libs/cts.hpp"
#include "libs/is.hpp"

int menu();

int main() {

    /* Initializing variables */
    int choice;
    std::size_t count = 0;
    std::vector<study_program::st_pr *> v;
    study_program::st_pr *temp = nullptr;

    /* I/O flow */
    for ( ;; ) {
        switch ((choice = menu())) {
            case 0:
                break;
            case 1:
                temp = new study_program::csas;
                break;
            case 2:
                temp = new study_program::cts;
                break;
            case 3:
                temp = new study_program::is;
                break;
            default:
                continue;
        }

        if (!choice) {
            break;
        }

        std::cin >> *temp;
        std::cout << std::endl;
        v.push_back(temp);
    }

    auto tmp = new study_program::csas;

    for (auto & i : v) {
        std::cout << *i << std::endl << std::endl;
        if (typeid(*i) == typeid(*tmp)) {
            ++count;
        }
        delete(i);
    }

    /* Final output */
    std::cout << "The number of groups in [csas]: " << count <<
            "\n\nThe abandoned students are Pavlov, Trusov, Tsarukyan, ...\n";

    /* Returning value */
    return 0;
}

int menu() {

    /* Initializing variables */
    int choice;

    /* I/O flow */
    std::cout << "Choose one option: \n" << "\t1) Create computer science and software [csas]\n"
              << "\t2) Create computer technologies and systems [cts]\n" << "\t3) Create information security [is]\n"
              << "\t0) Proceed to results\n\n";

    std::cout << "Answer: ";

    std::cin >> choice;

    /* Final output */
    std::cout << std::endl;

    /* Returning value */
    return choice;
}