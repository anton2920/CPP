#include <iostream>
#include <cstring>
#include <algorithm>

#include "student.hpp"
#include "libs.hpp"

int main() {

    /* Initializing variables */
    std::size_t size;

    /* I/O flow && VarCheck */
    size = readSize();

    auto array = new student[size];

    readAllFields(array, size);

    /* Guarantee to have sorted array of students */
    std::sort(array, array + size);

    /* Print the answer */
    std::cout << "\n\n----\t\t\tFirst task\t\t\t----\n";
    std::string tmpFaculty;
    std::cout << "Type desired faculty: ";
    std::cin >> tmpFaculty;
    print_1(array, size, tmpFaculty);

    std::cout << "\n\n----\t\t\tSecond task\t\t\t----\n";
    print_2(array, size);

    std::cout << "\n\n----\t\t\tThird task\t\t\t----\n";
    std::time_t year;
    std::cout << "Type desired year: ";
    std::cin >> year;
    print_3(array, size, year);

    /* Returning value */
    return 0;
}