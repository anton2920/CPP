#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusion */
#include <iostream>

/* Macro definitions */
#define iswordend(x) ((x) == ' ' || (x) == ',' || (x) == '.' ||     \
    (x) == '?' || (x) == '!' || (x) == '\0')

/* Type definitions */
struct word {
    char *begin;
    std::size_t length;
};

/* Functions' declarations */
int menu();
void task1();
void task2();

#endif