#include "libs.hpp"
#include <string>

/* io.cpp */
void prt_ln() {

    /* Final output */
    std::cout << " -------------------------------------------------------------\n";
}

size_t getNumber() {

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

void write_answer(class marr *array, class marr *back) {

    /* Initializing variables */
    size_t i;

    /* I/O flow */
    std::cout << "| Source array: ";
    for (i = 0; i < back->getNelem(); ++i) {
        std::cout << back->getElem(i) << " ";
    }
    std::cout << "\n| Answer:       ";
    for (i = 0; i < array->getNelem(); ++i) {
        std::cout << array->getElem(i) << " ";
    }
    std::cout << std::endl;

    /* Main part */
    while (std::cin.get() != '\n')
        ;

    /* Final output */
    prt_ln();
}

/* menu.cpp */
void no_cmd() {

    /* Final output */
    printf("| menu: no such command!                                     |\n");
}

bool quit_m() {

    /* Initializing variables */
    int junk;

    /* Main part */
    if ((junk = getchar()) == 'u') {
        if ((junk = getchar()) == 'i') {
            if ((junk = getchar()) == 't') {
                if ((junk = getchar()) == '\n') {
                    return -1;
                } else {
                    no_cmd();
                    while ((junk = getchar()) != '\n');
                    return false;
                }
            } else {
                no_cmd();
                if (junk == '\n') {
                    return false;
                } else {
                    while ((junk = getchar()) != '\n');
                    return false;
                }
            }
        } else {
            no_cmd();
            if (junk == '\n') {
                return false;
            } else {
                while ((junk = getchar()) != '\n');
                return false;
            }
        }
    } else {
        no_cmd();
        if (junk == '\n') {
            return false;
        } else {
            while ((junk = getchar()) != '\n');
            return false;
        }
    }
}

bool back_m() {

    /* Initializing variables */
    int junk;

    /* Main part */
    if ((junk = getchar()) == 'a') {
        if ((junk = getchar()) == 'c') {
            if ((junk = getchar()) == 'k') {
                if ((junk = getchar()) == '\n') {
                    return true;
                } else {
                    no_cmd();
                    while ((junk = getchar()) != '\n')
                        ;
                    return false;
                }
            } else {
                no_cmd();
                if (junk == '\n') {
                    return false;
                } else {
                    while ((junk = getchar()) != '\n');
                    return false;
                }
            }
        } else {
            no_cmd();
            if (junk == '\n') {
                return false;
            } else {
                while ((junk = getchar()) != '\n');
                return false;
            }
        }
    } else {
        no_cmd();
        if (junk == '\n') {
            return false;
        } else {
            while ((junk = getchar()) != '\n');
            return false;
        }
    }
}

int menu1() {

    /* Initializing variables */
    int func;

    /* I/O flow */
    while (true) {
        std::cout << " ------------------------------------------------------------\n" <<
"|                                                            |\n" <<
"|                        >> Lab_01 <<                        |\n" <<
"|                                                            |\n" <<
"|  >> Choose a task:                                         |\n" <<
"|                                                            |\n" <<
"|       1) Task #14                                          |\n" <<
"|       2) Task #19                                          |\n" <<
"|       3) Task #4                                           |\n" <<
"|       4) Task #9                                           |\n" <<
"|                                                            |\n" <<
"|       >> Type \"quit\" to terminate this program <<          |\n" <<
"|                                                            |\n";
        std::cout << "| Answer: ";
        func = std::cin.get();
        prt_ln();
        if (func >= '1' && func <= '4') {
            func -= '0';
            if (std::cin.get() != '\n') {
                while (std::cin.get() != '\n');
                no_cmd();
                continue;
            }
            return func;
        } else if (func == 'q') {
            if (quit_m()) {
                return -1;
            } else {
                continue;
            }
        } else {
            no_cmd();
            if (func != '\n') {
                while (std::cin.get() != '\n');
            }
            continue;
        }
    }
}

int menu2() {

    /* Initializing variables */
    int func;

    /* I/O flow */
    while (true) {
        std::cout << " ------------------------------------------------------------\n" <<
"|                                                            |\n" <<
"|                        >> Lab_01 <<                        |\n" <<
"|                                                            |\n" <<
"|  >> Fill in an array with:                                 |\n" <<
"|                                                            |\n" <<
"|       1) Keyboard-typed numbers                            |\n" <<
"|       2) Pseudo-randomly generated numbers                 |\n" <<
"|       3) Containment of a text file                        |\n" <<
"|                                                            |\n" <<
"|       >> Type \"back\" to go to the previous menu <<         |\n" <<
"|       >> Type \"quit\" to terminate this program <<          |\n" <<
"|                                                            |\n";
        std::cout << "| Answer: ";
        func = std::cin.get();
        prt_ln();
        if (func >= '1' && func <= '4') {
            func -= '0';
            if (std::cin.get() != '\n') {
                while (std::cin.get() != '\n');
                no_cmd();
                continue;
            }
            return func;
        } else if (func == 'q') {
            if (quit_m()) {
                return -1;
            } else {
                continue;
            }
        } else if (func == 'b') {
            if (back_m()) {
                return 0;
            } else {
                continue;
            }
        } else {
            no_cmd();
            if (func != '\n') {
                while (std::cin.get() != '\n');
            }
            continue;
        }
    }
}

bool menu_continue() {

    /* Initializing variables */
    int func, junk;

    /* I/O flow */
    while (true) {
        std::cout << "| Continue? [y/N]: ";
        switch ((func = std::cin.get())) {
            case 'y': case 'Y':
                if ((junk = std::cin.get()) != '\n') {
                    while ((junk = std::cin.get()) != '\n')
                        ;
                    prt_ln();
                    continue;
                }
                prt_ln();
                return true;
            case 'n': case 'N': case '\n':
                if (func == 'n' || func == 'N') {
                    if ((junk = std::cin.get()) != '\n') {
                        while ((junk = std::cin.get()) != '\n')
                            ;
                        prt_ln();
                        continue;
                    }
                }
                prt_ln();
                return false;
            default:
                while ((junk = std::cin.get()) != '\n')
                    ;
                prt_ln();
                continue;
        }
    }
}

/* task1.cpp */
void task_14(class marr *array) {

    /* Initializing variables */
    int *beg = nullptr, *end = nullptr;
    size_t best_size = 0;
    int *bbeg = beg, *bend = end;
    marr new_array(array->getNelem());
    bool flag = false;

    /* Main part */
    new_array.copy_from(array);

    for (size_t i = 0; i < array->getNelem(); ++i) {
        if (array->getElem(i) > 0 && !flag) {
            beg = array->getElemAddr(i);
            flag = true;
        } else if ((array->getElem(i) < 0 && flag) || i == array->getNelem() - 1) {
            end = array->getElemAddr(i);
            if (end - beg > best_size) {
                best_size = (i == array->getNelem() - 1) ? (end - beg) + 1 : end - beg;
                bbeg = beg;
                bend = end;
            }
            flag = false;
        }
    }
    if (beg == nullptr || end == nullptr) {
        return;
    }

    array->setNelem(array->getNelem() - best_size);

    for (size_t i = 0, j = 0; i < array->getNelem(); ++i) {
        if (array->getElemAddr(i) < bbeg || array->getElemAddr(i) >= bend) {
            array->setElem(new_array[i], j++);
        }
    }
}