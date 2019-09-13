#include "new/libs.hpp"
#include <string>

void prt_ln() {

    /* Final output */
    std::cout << " -------------------------------------------------------------\n";
}

std::size_t getNumber() {

    /* Initializing variables */
    std::size_t n;

    /* I/O flow */
    do {
        std::cout << "| Type the number of elements [10]: ";
        n = std::cin.get();
        if (n != '\n') {
            std::cin.putback(n);
            std::cin >> n;
        }
    } while (n <= 0);

    /* Final output */
    prt_ln();

    /* Returning value */
    return n;
}

int promtMsg(const char *msg) {

    /* Initializing variables */
    std::string ans;
    int ret_val = 0;

    /* I/O flow */
    std::cerr << msg;

    std::cerr << "| Abort, Retry, Fail? ";
    std::cin >> ans;

    if (ans == "A" || ans == "a" || ans == "Abort" || ans == "abort") {
        ret_val = 1;
    } else if (ans == "R" || ans == "r" || ans == "Retry" || ans == "retry") {
        ret_val = 2;
    } else if (ans == "F" || ans == "f" || ans == "Fail" || ans == "fail") {
        ret_val = 3;
    }

    /* Main part */
    while (std::cin.get() != '\n')
        ;

    /* Returning value */
    return ret_val;
}