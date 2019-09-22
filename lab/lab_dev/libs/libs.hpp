#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusions */
#include <iostream>
#include <fstream>
#include <cmath>
#include "marr.hpp"

/* Macro definitions */
#define ENDING(__expr) (((__expr) == 1) ? "st" : ((__expr) == 2) ? "nd" : ((__expr) == 3) ? "rd" : "th")
#define EPS (10e-2)

/* io.cpp */
void prt_ln();
size_t getNumber();
int promtMsg(const char *);

/* menu.cpp */
void no_cmd();
bool quit_m();
bool back_m();
int menu1();
int menu2();
bool menu_continue();

/* libs_1.cpp */
void task_14(class marr &);
bool task_19(class marr *);
int task_4_cmp(const void *, const void *);
void task_9(class marr *);
void write_array(const char *, marr &);

int num_cmp(const void *aa1, const void *aa2);

#endif