#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusions */
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>

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

/* task2 */
void task_14(std::vector<double> &);
void task_19(std::vector<double> &);
void task_4(std::vector<double> &, int(*)(const void *, const void *));
int task_4_cmp(const void *, const void *);
void task_9(std::vector<double> &);

/* libs_2.cpp */
void readVec(std::vector<double> &, std::size_t);
void randVec(std::vector<double> &, std::size_t);
bool fileVec(std::vector<double> &, std::size_t);
void write_vector(const char *, std::vector<double> &);
bool write_to_file(std::vector<double> &array, const char *name);

#endif