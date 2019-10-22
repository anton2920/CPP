#include <stdexcept>
#include <iostream>

#include "fraction.hpp"

lab::fraction::fraction(int m, int n) {

    /* Initializing variables */
    if (n == 0) {
        throw std::range_error("zero division");
    }
    this->m = m;
    this->n = n;
}

lab::fraction::fraction(const lab::fraction &other) {

    /* Initializing variables */
    this->m = other.m;
    this->n = other.n;
}

lab::fraction::~fraction() = default;

lab::fraction &lab::fraction::operator=(const lab::fraction &other) = default;

lab::fraction &lab::fraction::operator=(const int other) {

    /* Initializing variables */
    this->m = other;
    this->n = 1;

    /* Returning value */
    return *this;
}

lab::fraction lab::fraction::operator+(const lab::fraction &other) const {

    /* Initializing variables */
    fraction tmp;
    int nok = lab::nok(this->n, other.n);

    /* Main part */
    if (this->n == other.n) {
        tmp.m = this->m + other.m;
        tmp.n = this->n;
    } else {
        tmp.n = nok;
        tmp.m = (nok / this->n) * this->m + (nok / other.n) * other.m;

    }

    /* Returning value */
    return tmp.reduction();
}

lab::fraction lab::fraction::operator-(const lab::fraction &other) const {

    /* Initializing variables */
    fraction tmp;
    int nok = lab::nok(this->n, other.n);

    /* Main part */
    if (this->n == other.n) {
        tmp.m = this->m - other.m;
        tmp.n = this->n;
    } else {
        tmp.n = nok;
        tmp.m = (nok / this->n) * this->m - (nok / other.n) * other.m;

    }

    /* Returning value */
    return tmp.reduction();
}

lab::fraction lab::fraction::operator*(const lab::fraction &other) const {

    /* Returning value */
    return lab::fraction(this->m * other.m, this->n * other.n).reduction();
}

lab::fraction lab::fraction::operator/(const lab::fraction &other) const {

    /* Initializing variables */
    fraction tmp;

    /* Main part */
    if (other.m == 0) {
        throw std::range_error("zero division");
    }

    return lab::fraction(this->m * other.n, this->n * other.m).reduction();
}

lab::fraction lab::fraction::operator+(const int other) const {

    /* Returning value */
    return lab::fraction(this->m + other * this->n, this->n).reduction();
}

lab::fraction lab::fraction::operator-(const int other) const {

    /* Returning value */
    return lab::fraction(this->m - other * this->n, this->n).reduction();
}

lab::fraction lab::fraction::operator*(const int other) const {

    /* Returning value */
    return lab::fraction(this->m * other, this->n).reduction();
}

lab::fraction lab::fraction::operator/(const int other) const {

    /* Main part */
    if (other == 0) {
        throw std::range_error("zero division");
    }

    /* Returning value */
    return lab::fraction(this->m, this->n * other);
}

lab::fraction &lab::fraction::operator++() {

    /* Main part */
    this->m += this->n;
    this->reduction();

    /* Returning value */
    return *this;
}

lab::fraction &lab::fraction::operator--() {

    /* Main part */
    this->m -= this->n;
    this->reduction();

    /* Returning value */
    return *this;
}

lab::fraction lab::fraction::reduction() {

    /* Initializing variables */
    int sign = (this->m > 0) ? 1 : -1;
    this->m *= sign;
    int nod = lab::nod(this->m, this->n);


    /* Main part */
    this->m /= nod;
    this->n /= nod;

    this->m *= sign;

    /* Returning value */
    return *this;
}

std::ostream &lab::operator<<(std::ostream &out, const lab::fraction &fr) {

    /* I/O flow */
    if (fr.n == 1) {
        out << fr.m;
    } else if (fr.n == -1) {
        out << -fr.m;
    } else if (fr.m == 0) {
        out << "0";
    } else {
        out << fr.m << " / " << fr.n;
    }

    /* Returning value */
    return out;
}


std::istream &lab::operator>>(std::istream &in, lab::fraction &fr) {

    /* I/O flow */
    std::cout << "Type numerator: ";
    in >> fr.m;

    for (;;) {
        try {
            std::cout << "Type denominator: ";
            in >> fr.n;
            if (fr.n) {
                break;
            } else {
                throw std::out_of_range("denominator == 0");
            }
        } catch (...) {
            std::cerr << "Denominator can't be zero!\n" << std::flush;
        }
    }

    /* Returning value */
    return in;
}

int lab::fraction::getM() const {

    /* Returning value */
    return m;
}

int lab::fraction::getN() const {

    /* Returning value */
    return n;
}

void lab::fraction::setM(int a) {

    /* Initializing variables */
    fraction::m = a;
}

void lab::fraction::setN(int a) {

    /* Initializing variables */
    fraction::n = a;
}

int lab::nod(int a, int b) {

    /* Main part */
    while (a * b > 0) {
        a > b ? a %= b : b %= a;
    }

    /* Returning value */
    return a + b;
}

int lab::nok(int a, int b) {

    /* Returning value */
    return a * b / nod(a, b);
}