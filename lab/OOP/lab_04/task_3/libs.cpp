#include <fstream>
#include <exception>
#include <cstring>

#include "libs.hpp"

static const std::size_t BUFSIZE = 1024;

int menu() {

    /* Initializing variables */
    std::size_t choice = 0;

    /* I/O flow */
    for ( ;; ) {
        try {
            std::cout << "Type the task number: \n" <<
                      "\t1) Find word\n" << "\t2) Insert substring\n\n" << "Answer: ";
            std::cin >> choice;
            while (std::cin.get() != '\n')
                ;
            if (choice < 1 || choice > 2) {
                throw std::out_of_range("wrong menu item");
            }
            break;
        } catch (...) {
            std::cin.clear();
            std::cout << std::endl;
            continue;
        }
    }

    /* Returning value */
    return choice;
}

void task1() {

    /* Initializing variables */
    char buf[BUFSIZE];
    std::ifstream inputs("input.txt");
    word wd{};
    std::size_t num;

    /* Main part */
    if (inputs.is_open()) {
        std::cout << "Type a number: ";
        std::cin >> num;

        for (std::size_t i = 0; i < num; ++i) {
            wd.begin += wd.length;
            if (wd.begin == nullptr) {
                inputs.getline(buf, BUFSIZE);
                if (!strlen(buf)) {
                    std::cerr << "There's no word with this number\n";
                    return;
                }
                wd = { buf, 0 };
            }
            wd = wd.getNextWord();
            if (wd.begin == nullptr) {
                --i;
            }
        }

        inputs.close();

        if (wd.begin != nullptr) {
            std::cout << "First letter of your word: " << *wd.begin << std::endl;
        }
    }
}

void task2() {

    /* Initializing variables */
    std::string s, s1;
    std::size_t pos = 0;

    /* I/O flow */
    std::cout << "Type string: ";
    std::getline(std::cin, s, '\n');

    std::cout << "Type another string: ";
    std::getline(std::cin, s1, '\n');

    /* Main part */
    for ( ;; ) {
        try {
            std::cout << "Type position to insert: ";
            std::cin >> pos;

            s.insert(pos, s1);
            break;
        } catch (...) {
            std::cerr << "Wrong position\n";
            continue;
        }
    }

    /* Final output */
    std::cout << "New string: " << s << std::endl;
}