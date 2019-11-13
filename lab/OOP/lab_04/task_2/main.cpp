#include <iostream>
#include <fstream>

#include "libs.hpp"
#include "user.hpp"

int main() {

    /* Initializing variables */
    user u;
    std::map<std::time_t, std::set<user>> m;
    std::multiset<user> s;
    std::ifstream inputs("input.txt");

    /* Main part */
    init_map(m);
    if (inputs.is_open()) {
        for ( ; !inputs.eof(); ) {
            inputs >> u;

            auto elem = m.find(u.getWday());
            elem->second.insert(u);

            if (!u.getWday()) {
                s.insert(u);
                elem = m.find(7);
                elem->second.insert(u);
            }
        }

        print_unique(m);
        std::cout << std::endl;
        check_sunday(m, s);
    } else {
        std::cerr << "Cannot open input.txt" << std::endl;
    }

    /* Returning value */
    return 0;
}