#ifndef LAB_DEV_MARR_HPP
#define LAB_DEV_MARR_HPP

#include <iostream>
#include "libs.hpp"

class marr {
    /* Fields */
private:
    double *data = nullptr;
    std::size_t nelem = 10;
    bool init_ok = false;

    /* Methods */
public:
    marr();
    explicit marr(std::size_t);
    ~marr();

    std::size_t getNelem();
    void setNelem(std::size_t);

    void readArr();
    void randArr();
    bool fileArr();

    double operator[](std::size_t);

    double getElem(std::size_t);
    double *getElemAddr(std::size_t);
    void setElem(std::size_t, double);
    bool is_init();

    bool copy_from(class marr *);

    bool insert_after(std::size_t, double);

    void rearrange(int(*)(const void *, const void *));

    bool write_to_file(const char *);
};

#endif