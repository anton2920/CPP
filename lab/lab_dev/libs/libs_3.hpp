#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusions */
#include <iostream>
#include <fstream>
#include <cmath>
#include <memory>
#include <algorithm>

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
int menu2();
bool menu_continue();

void readPtr(std::unique_ptr<int[]> &, std::size_t);
void randPtr(std::unique_ptr<int[]> &, std::size_t);
bool filePtr(std::unique_ptr<int[]> &, std::size_t);

bool write_to_file(std::unique_ptr<int[]> &, std::size_t, const char *);
void write_ptr(const char *, std::unique_ptr<int[]> &, std::size_t);
void write_answer(bool);

bool special_task(std::unique_ptr<int[]> &, std::size_t);

int num_cmp(const void *aa1, const void *aa2);

#endif