#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusion */
#include "student.hpp"

/* Type definitions */
enum errors {
    TOO_LARGE_SIZE = 6585
};

/* Other stuff */
void readAllFields(student *, std::size_t);
size_t readSize();

void print_1(student *, std::size_t , std::string faculty);
void print_2(student *, std::size_t);
void print_3(student *, std::size_t, std::time_t year);

#endif