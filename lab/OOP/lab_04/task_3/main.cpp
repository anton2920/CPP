#include <iostream>
#include <fstream>
#include <chrono>

#include "libs.hpp"

int main() {

    /* Initializing variables */
    std::chrono::high_resolution_clock::time_point t1, t2;

    /* Main part */
    switch (menu()) {
        case 1:
            t1 = std::chrono::high_resolution_clock::now();
            task1();
            t2 = std::chrono::high_resolution_clock::now();
            break;
        case 2:
            t1 = std::chrono::high_resolution_clock::now();
            task2();
            t2 = std::chrono::high_resolution_clock::now();
            break;
    }

    /* Final output */
    std::cout << "\nTime: " << std::chrono::duration_cast<std::chrono::milliseconds>( t2 - t1 ).count() << std::endl;

    /* Returning value */
    return 0;
}