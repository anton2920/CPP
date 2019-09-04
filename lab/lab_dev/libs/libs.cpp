#include "libs.hpp"
#include <string>

void prt_ln() {

    /* Final output */
    std::cout << " -------------------------------------------------------------\n";
}

size_t getNelem() {

    /* Initializing variables */
    size_t n;

    /* I/O flow */
    do {
        std::cout << "| Type the number of elements [10]: ";
        n = std::cin.get();
        if (n != '\n') {
            std::cin.putback(n);
            std::cin >> n;
        }
    } while (n <= 0);

    /* Returning value */
    return n;
}

int *getArray(size_t nelem) {

    /* Returning value */
    return new int [nelem];
}

bool readArr(int *arr, size_t nelem = 10) {

    /* I/O flow */
    for (size_t i = 0; i < nelem; ++i) {
        std::cout << "| Type " << i << ENDING(i) << "element: ";
        std::cin >> *(arr + i);
    }

    /* Returning value */
    return true;
}

bool randArr(int *arr, size_t nelem = 10) {

    /* Initializing variables */
    int leftBnd, rightBnd;

    /* I/O flow */
    std::cout << "| Type left bound: ";
    std::cin >> leftBnd;

    do {
        std::cout << "| Type right bound: ";
        std::cin >> rightBnd;
    } while (rightBnd < leftBnd);

    /* Main part */
    for (size_t i = 0; i < nelem; ++i) {
        *(arr + i) = (std::rand() % (rightBnd - leftBnd + 1)) + leftBnd;
    }

    /* Returning value */
    return true;
}

bool fileArr(int *arr, size_t nelem = 10) {

    /* Initializing variables */
    std::ifstream inputs;
    std::string filename;
    int func;

    /* I/O flow */
    std::cout << "| Type filename: ";
    std::cin >> filename;

    /* Main part */
    for (;;) {
        inputs.open(filename, std::ios_base::in);
        if (inputs.is_open()) {
            for (size_t i = 0; i < nelem; ++i) {
                inputs >> *(arr + i);
                if (inputs.eof()) {
                    inputs.close();
                    return false;
                }
            }
            break;
        } else {
            func = promtMsg("| Error! File can't be opened!\n");
            switch (func) {
                case 1:
                    exit(2);
                case 2:
                    continue;
                case 3:
                    return false;
                default:
                    break;
            }
        }
    }
    inputs.close();

    /* Returning value */
    return true;
}

int menu1() {

    /* Returning value */
    return 0;
}

bool (*menu2())(int *, size_t) {

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

    /* Returning value */
    return ret_val;
}