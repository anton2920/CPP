#include <iostream>

#include "libs/list.hpp"

int main() {

    /* Initializing variables */
    lab::list<int> l;

    /* Main part */
    for (int i = 10; i > 0; --i) {
        l.push_back(i);
    }

    for (auto &i : l) {
        std::cout << i << " ";
    }

    l.sort();

    std::cout << std::endl;

    for (auto &i : l) {
        std::cout << i << " ";
    }

    /* Final output */
    std::cout << std::endl;

    /* Returning value */
    return 0;
}