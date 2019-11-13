#include <list>

#include "libs.hpp"

void print_unique(const std::map<std::time_t, std::set<user>> &m) {

    /* Main part */
    for (auto &i : m) {
        if (i.first == 7) {
            continue;
        }
        std::cout << "The number of unique users on " << GET_DAY(i.first) << " is equals to " << i.second.size() << std::endl;
    }
}

void check_sunday(const std::map<std::time_t, std::set<user>> &m, const std::multiset<user> &s) {

    /* Initializing variables */
    std::size_t max = 0, curr;
    auto s1 = m.find(7)->second;
    std::list<user> l;

    /* Main part */
    for (const auto & i : s1) {
        if ((curr = s.count(i)) > max) {
            max = curr;
        }
    }

    for (const auto & i : s1) {
        if ((curr = s.count(i)) == max) {
            l.push_back(i);
        }
    }

    std::cout << "The best users on Sunday (visits: " << max << "): " << std::endl;
    for (auto &i : l) {
        std::cout << i << std::endl;
    }
}

void init_map(std::map<std::time_t, std::set<user>> &m) {

    /* Initializing variables */
    std::set<user> s;

    /* Main part */
    for (int i = 0; i < 8; ++i) {
        m.insert({i, s});
    }
}
