#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusions */
#include <iostream>
#include <fstream>
#include <cmath>
#include <memory>

/* Macro definitions */
#define ENDING(__expr) (((__expr) == 1) ? "st" : ((__expr) == 2) ? "nd" : ((__expr) == 3) ? "rd" : "th")

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




#endif