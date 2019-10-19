#include <stdexcept>

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
        tmp.m = this->m + other.m;
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

lab::fraction lab::fraction::reduction() {

    /* Initializing variables */
    int nod = lab::nod(this->m, this->n);

    /* Main part */
    this->m /= nod;
    this->n /= nod;

    /* Returning value */
    return *this;
}

void lab::fraction::print(std::ostream &stream) {

    /* I/O flow */
    if (this->n == 1) {
        stream << this->m;
    } else if (this->n == -1) {
        stream << -this->m;
    } else if (this->m == 0) {
        stream << "0";
    } else {
            stream << this->m << " / " << this->n;
    }
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
