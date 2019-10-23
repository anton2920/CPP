#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusion */
#include <iostream>
#include <list>
#include "pharmacy.hpp"

/* Type definitions */

/* Other stuff */
int getWay();
void readList(std::istream &in, std::list<pharmacy> &l);
void printList(std::ostream &out, const std::list<pharmacy> &l);

void task_1(const std::list<pharmacy> &l);
void task_2(const std::list<pharmacy> &l);

#endif