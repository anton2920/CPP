#include "new/libs.hpp"
#include <string>

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
        if (func >= '1' && func <= '3') {
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
