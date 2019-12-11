#include <iostream>

#include "libs/list.hpp"
#include "libs/libs.hpp"
#include "libs/stack.hpp"

int main() {

    /* Initializing variables */
    std::srand(time(nullptr));
    lab::list<int> l1;
    lab::list<lab::stack<student>> l2;

    /* Main part */
    switch (menu()) {
        case 1:
            show(l1);
            break;
        case 2:
            show(l2);
            break;
        default:
            break;
    }

    /* Final output */
    std::cout << std::endl;

    /* Returning value */
    return 0;
}
