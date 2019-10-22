#include <iostream>
#include <fstream>

#include "fraction.hpp"
#include "vector.hpp"

int getWay();
void readVector(std::istream &in, lab::vector<lab::fraction> &vec);
void readNumber(std::istream &in, int &);

int main() {

    /* Initializing variables */
    lab::vector<lab::fraction> a, b;
    int number;
    std::ifstream inp("input.txt");
    int way = getWay();

    /* I/O flow */
    if (!inp.is_open()) {
        throw std::ios_base::failure("inp hasn't opened");
    }

    readVector((way == 1) ? std::cin : inp, a);
    readVector((way == 1) ? std::cin : inp, b);

    readNumber((way == 1) ? std::cin : inp, number);

    std::cout << std::endl << "a = " << a << std::endl <<
        "b = " << b << std::endl <<
        "a + b = " << a + b << std::endl <<
        "a - b = " << a - b << std::endl <<
        "a * " << number << " = " << a * number << std::endl <<
        "b * " << number << " = " << b * number << std::endl <<
        "a * b = " << a * b << std::endl <<
        "| a | = " << a.length() << std::endl <<
        "| b | = " << b.length() << std::endl;

    /* Returning value */
    return 0;
}

int getWay() {

    /* Initializing variables */
    int way;

    /* Main part */
    for (;;) {
        try {
            std::cout << "Choose input stream: \n" <<
                      "\t1) std::cin\n" <<
                      "\t2) input.txt\n" <<
                      "\nAnswer: ";
            std::cin >> way;
            break;
        } catch (...) {
            std::cerr << "Bad input!\n" << std::flush;
        }
    }

    /* Returning value */
    return way;
}

void readVector(std::istream &in, lab::vector<lab::fraction> &vec) {

    /* I/O flow */
    in >> vec;
}

void readNumber(std::istream &in, int &number) {

    /* I/O flow */
    std::cout << "Type a number to multiply: ";
    in >> number;
}