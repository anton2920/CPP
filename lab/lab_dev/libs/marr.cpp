#include "marr.hpp"

marr::marr() {

    /* Main part */
    if ((this->data = new int [this->nelem]) != nullptr) {
        this->init_ok = true;
    }
}

marr::marr(size_t nelem) {

    /* Main part */
    if (nelem > 0) {
        if ((this->data = new int [nelem]) != nullptr) {
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
    int leftBnd, rightBnd;

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

int marr::getElem(size_t index) {

    /* Returning value */
    return (index >= 0 && index <= this->nelem) ? this->data[index] : -1;
}

int *marr::getElemAddr(size_t index) {

    /* Main part */
    return (index >= 0 && index <= this->nelem) ? &this->data[index] : nullptr;
}

void marr::setElem(int elem, size_t index) {

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

int marr::operator[](const size_t index) {

    /* Returning value */
    return (index >= 0 && index <= this->nelem) ? this->data[index] : -1;
}
