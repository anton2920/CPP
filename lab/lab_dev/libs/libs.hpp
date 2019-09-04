#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusions */
#include <iostream>
#include <fstream>

/* Macro definitions */
#define ENDING(__expr) (((__expr) == 1) ? "st" : ((__expr) == 2) ? "nd" : ((__expr) == 3) ? "rd" : "th")

/* io.cpp */
void prt_ln();
size_t getNelem();
int *getArray(size_t);
bool readArr(int *, size_t);
bool randArr(int *, size_t);
int promtMsg(const char *);

/* menu.cpp */
int menu1();
bool (*menu2())(int *, size_t);

#endif