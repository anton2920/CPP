#include <iostream>
#include <fstream>
#include <cmath>

#include "slau.hpp"

#define ENDING(x) (((x) == 1) ? "st" : ((x) == 2) ? "nd" : ((x) == 3) ? "rd" : "th")

slau::slau(size_t m) : m(m) {

    /* Main part */
    try {
        this->A = new double[m * m]();
        this->b = new double[m]();
        this->xcurr = new double[m]();
        this->xprev = new double[m]();
    } catch (...) {
        std::cerr << "Errors with memory allocation!\n" << std::flush;
        std::exit(-1);
    }
}

slau::~slau() {

    /* Main part */
    delete[] this->A;
    delete[] this->b;
    delete[] this->xcurr;
    delete[] this->xprev;
}


void slau::sor1(double *x_new, const double *x, double omega) {

    /* Initializing variables */
    size_t i, j;

/* Do the Gauss-Seidel computation */
    for (i = 0; i < this->m; i++) {
        x_new[i] = b[i];
        for (j = 0; j < i; j++) {
            x_new[i] = x_new[i] - A[i + j * this->m] * x_new[j];
        }
        for (j = i + 1; j < this->m; j++) {
            x_new[i] = x_new[i] - A[i + j * this->m] * x[j];
        }
        x_new[i] = x_new[i] / A[i + i * this->m];
    }
/* Use omega to blend the Gauss-Seidel update with the old solution */
    if (omega != 1.0) {
        for (i = 0; i < this->m; i++) {
            x_new[i] = (1.0 - omega) * x[i] + omega * x_new[i];
        }
    }
}

std::size_t slau::sor(double omega) {

    /* Initializing variables */
    double *B;
    std::size_t iter = 0;

    /* Main part */
    try {
        B = new double[this->m];
    } catch (...) {
        std::cerr << "Errors with memory allocation!\n" << std::flush;
        std::exit(-1);
    }

    do {
        ++iter;
        sor1(this->xcurr, this->xprev, omega);
        /* std::cout << this->xcurr[0] << " " << this->xcurr[1] << " " << this->xcurr[2] << std::endl << std::flush; */
        diff(B, this->xcurr, this->xprev);
        std::copy(this->xcurr, this->xcurr + this->m, this->xprev);
    } while (norm1(B) > this->eps);

    delete[] B;

    /* Returning value */
    return iter;
}

double slau::norm1(const double *self) {

    /* Initializing variables */
    double sum = 0;

    /* Main part */
    for (std::size_t i = 0; i < this->m; ++i) {
        sum += fabs(self[i]);
    }

    /* Returning value */
    return sum;
}

void slau::diff(double *res, const double *self, const double *other) {

    /* Main part */
    for (std::size_t i = 0; i < this->m; ++i) {
        res[i] = self[i] - other[i];
    }
}

void slau::read() {

    /* Main part */
    for (std::size_t i = 0; i < this->m; ++i) {
        std::cout << "Type " << i << ENDING(i) << " line: ";
        for (std::size_t j = 0; j < this->m; ++j) {
            /* std::scanf("%lf", &this->A[i * this->m + j]); */
            std::cin >> this->A[i + j * this->m];
        }
    }

    std::cout << "Type right part: ";
    for (std::size_t i = 0; i < this->m; ++i) {
        /* std::scanf("%lf", b + i); */
        std::cin >> this->b[i];
    }
}

void slau::printSolution(std::size_t iter, std::ostream &stream) {

    /* Main part */
    stream << "Solution (number of iterations = " << iter << "): " << std::flush;
    for (std::size_t i = 0; i < this->m; ++i) {
        stream << this->xcurr[i] << " ";
    }
    
    /* Final output */
    std::cout << std::endl;
}