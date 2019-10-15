#ifndef LAB_DEV_SLAU_HPP
#define LAB_DEV_SLAU_HPP

/* Header inclusion */
#include <iostream>

class slau {

private:
    /* Fields */
    double *A; /* Source matrix m × m */
    double *b; /* Right part */
    double *xcurr; /* n-approximation vector */
    double *xprev; /* (n-1)-approximation vector */
    std::size_t m; /* Size of matrix */
    double normB;
    double normB2;

public:
    /* Methods */
    explicit slau(size_t m = 3);
    ~slau();

private:
    void sor1(double *, const double *, double);
    double norm1(const double *);
    void diff(double *res, const double *, const double *);
    bool check_conv();

public:
    std::size_t sor(double omega, double eps);
    void read();
    void printSolution(std::size_t iter, std::ostream &stream);
};

#endif
