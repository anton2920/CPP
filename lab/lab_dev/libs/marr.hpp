#ifndef LAB_DEV_MARR_HPP
#define LAB_DEV_MARR_HPP

#include <iostream>
#include "libs.hpp"

class marr {
    /* Fields */
private:
    int *data = nullptr;
    size_t nelem = 10;
    bool init_ok = false;

    /* Methods */
public:
    marr();
    marr(size_t);
    ~marr();

    size_t getNelem();
    void setNelem(size_t);

    void readArr();
    void randArr();
    bool fileArr();

    int operator[](const size_t);

    int getElem(size_t);
    int *getElemAddr(size_t);
    void setElem(int, size_t);
    bool is_init();

    bool copy_from(class marr *);
};

#endif