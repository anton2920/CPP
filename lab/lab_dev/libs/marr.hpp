#ifndef LAB_DEV_MARR_HPP
#define LAB_DEV_MARR_HPP

#include <iostream>
#include "libs.hpp"

template <class T>
class marr {
    /* Fields */
private:
    T *data = nullptr;
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

    T operator[](const size_t);

    T getElem(size_t);
    T *getElemAddr(size_t);
    void setElem(size_t, T);
    bool is_init();

    bool copy_from(class marr *);

    bool insert_after(size_t, T);
};

#endif