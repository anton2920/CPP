#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusion */
#include <map>
#include <set>

#include "user.hpp"

/* Macro definitions */
#define GET_DAY(x) ((!x) ? "Sunday" : (x == 1) ? "Monday" : (x == 2) ? "Tuesday" : \
    (x == 3) ? "Wednesday" : (x == 4) ? "Tuesday" : (x == 5) ? "Friday" :          \
    (x == 6) ? "Saturday" : "none")

/* Type definitions */

/* Functions' declarations */
void init_map(std::map<std::time_t, std::set<user>> &m);
void print_unique(const std::map<std::time_t, std::set<user>> &);
void check_sunday(const std::map<std::time_t, std::set<user>> &, const std::multiset<user>&);

#endif