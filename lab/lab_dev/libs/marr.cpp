#include "marr.hpp"

template <class T>
marr<T>::marr() {

    /* Main part */
    if ((this->data = new T [this->nelem]) != nullptr) {
        this->init_ok = true;
    }
}

template <class T>
marr::marr(size_t nelem) {

    /* Main part */
    if (nelem > 0) {
        if ((this->data = new T [nelem]) != nullptr) {
            this->init_ok = true;
            this->nelem = nelem;
        }
    }
}

marr::~marr() {

    /* Main part */
    delete[](this->data);
}

size_t marr::getNelem() {

    /* Returning value */
    return this->nelem;
}

void marr::setNelem(size_t newn) {

    /* Main part */
    if (newn >= this->nelem) {
        return;
    } else {
        this->nelem = newn;
    }
}

void marr::readArr() {

    /* I/O flow */
    for (size_t i = 0; i < this->nelem; ++i) {
        std::cout << "| Type " << i << ENDING(i) << " element: ";
        std::cin >> *(this->data + i);
    }

    /* Final output */
    prt_ln();
}

void marr::randArr() {

    /* Initializing variables */
    int leftBnd = 0, rightBnd = RAND_MAX;

    /* I/O flow */
    std::cout << "| Type left bound: ";
    std::cin >> leftBnd;

    do {
        std::cout << "| Type right bound: ";
        std::cin >> rightBnd;
    } while (rightBnd < leftBnd);

    /* Main part */
    for (size_t i = 0; i < this->nelem; ++i) {
        *(this->data + i) = (std::rand() % (rightBnd - leftBnd + 1)) + leftBnd;
    }

    /* Final output */
    prt_ln();
}

bool marr::fileArr() {

    /* Initializing variables */
    std::ifstream inputs;
    std::string filename;
    int func;

    /* I/O flow */
    std::cout << "| Type filename: ";
    std::cin >> filename;

    /* Main part */
    for (;;) {
        inputs.open(filename, std::ios_base::in);
        if (inputs.is_open()) {
            for (size_t i = 0; i < this->nelem; ++i) {
                inputs >> *(this->data + i);
                if (inputs.eof()) {
                    inputs.close();
                    return false;
                }
            }
            break;
        } else {
            func = promtMsg("| Error! File can't be opened!\n");
            switch (func) {
                case 1:
                    exit(2);
                case 2:
                    continue;
                case 3:
                    return false;
                default:
                    break;
            }
        }
    }
    inputs.close();

    /* Final output */
    prt_ln();

    /* Returning value */
    return true;
}

T marr::getElem(size_t index) {

    /* Returning value */
    return (index >= 0 && index <= this->nelem) ? this->data[index] : -1;
}

T *marr::getElemAddr(size_t index) {

    /* Main part */
    return (index >= 0 && index <= this->nelem) ? &this->data[index] : nullptr;
}

void marr::setElem(size_t index, T elem) {

    if (index >= 0 && index <= this->nelem) {
        this->data[index] = elem;
    }
}

bool marr::is_init() {
    return this->init_ok;
}

bool marr::copy_from(class marr *src) {

    /* Main part */
    if (this->nelem < src->getNelem()) {
        return false;
    }

    for (size_t i = 0; i < src->getNelem(); ++i) {
        this->data[i] = src->getElem(i);
    }

    /* Returning value */
    return true;
}

T marr::operator[](const size_t index) {

    /* Returning value */
    return (index >= 0 && index <= this->nelem) ? this->data[index] : -1;
}

bool marr::insert_after(size_t index, T elem) {

    /* Initializing variables */
    class marr new_array;

    /* Main part */
    new_array.copy_from(this);

    delete [] this->data;

    for (size_t i = 0; i < new_array.getNelem(); ++i) {

    }

    /* Returning value */
    return true;
}
