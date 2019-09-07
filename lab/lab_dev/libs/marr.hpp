#ifndef LAB_DEV_MARR_HPP
#define LAB_DEV_MARR_HPP

#include <iostream>
#include "libs.hpp"

class marr {
    /* Fields */
private:
    double *data = nullptr;
    size_t nelem = 10;
    bool init_ok = false;

    /* Methods */
public:
    marr();
    explicit marr(size_t);
    ~marr();

    size_t getNelem();
    void setNelem(size_t);

    void readArr();
    void randArr();
    bool fileArr();

    double operator[](size_t);

    double getElem(size_t);
    double *getElemAddr(size_t);
    void setElem(size_t, double);
    bool is_init();

    bool copy_from(class marr *);

    bool insert_after(size_t, double);
};

#endif