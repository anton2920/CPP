#include "marr.hpp"

marr::marr() {

    /* Main part */
    if ((this->data = new double [this->nelem + 1]) != nullptr) {
        this->init_ok = true;
    }
}

marr::marr(size_t nelem) {

    /* Main part */
    if (nelem > 0) {
        if ((this->data = new double [nelem + 1]) != nullptr) {
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

double marr::getElem(size_t index) {

    /* Returning value */
    return (index >= 0 && index <= this->nelem) ? this->data[index] : -1;
}

double *marr::getElemAddr(size_t index) {

    /* Main part */
    return (index >= 0 && index <= this->nelem) ? &this->data[index] : nullptr;
}

void marr::setElem(size_t index, double elem) {

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

double marr::operator[](const size_t index) {

    /* Returning value */
    return (index >= 0 && index <= this->nelem) ? this->data[index] : -1;
}

bool marr::insert_after(size_t index, double elem) {

    /* Initializing variables */
    double temp;
    class marr arr(this->nelem);

    /* Main part */
    arr.copy_from(this);

    for (size_t i = index + 1; i < this->nelem; ++i) {
        this->data[i + 1] = arr[i];
    }

    ++this->nelem;

    this->data[index + 1] = elem;

    /* Returning value */
    return true;
}
