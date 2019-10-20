#include <exception>
#include <cmath>

#include "vector.hpp"

template<class T>
lab::vector<T>::vector() {

    /* Main part */
    this->array = new T[max_size];
}

template<class T>
lab::vector<T>::vector(const vector<T> &other) {

    /* Main part */
    this->array = new T[other.max_size];
    this->_size = other.size();
    this->TO = this->_size;
    std::copy(other.begin(), other.end(), this->begin());
}

template<class T>
std::size_t lab::vector<T>::size() const {

    /* Returning value */
    return this->_size;
}

template<class T>
T lab::vector<T>::operator[](const std::size_t i) const {

    /* Returning value */
    return this->array[i];
}

template<class T>
lab::vector<T> &lab::vector<T>::operator+(const lab::vector<T> &other) const {

    /* Initializing variables */
    vector<T> tmp(*this);

    /* Main part */
    if (this->size() != other.size()) {
        throw std::invalid_argument("lengths are not equal");
    }

    for (std::size_t i = 0; i < this->size(); ++i) {
        tmp[i] = this->array[i] + other[i];
    }

    /* Returning value */
    return tmp;
}

template<class T>
lab::vector<T> &lab::vector<T>::operator-(const lab::vector<T> &other) const {

    /* Initializing variables */
    vector<T> tmp(*this);

    /* Main part */
    if (this->size() != other.size()) {
        throw std::invalid_argument("lengths are not equal");
    }

    for (std::size_t i = 0; i < this->size(); ++i) {
        tmp[i] = this->array[i] + other[i];
    }

    /* Returning value */
    return tmp;
}

template<class T>
int lab::vector<T>::operator*(const lab::vector<T> &other) const {

    /* Initializing variables */
    int dot_prod = 0;

    /* Main part */
    if (this->size() != other.size()) {
        throw std::invalid_argument("lengths are not equal");
    }

    for (std::size_t i = 0; i < this->size(); ++i) {
        dot_prod += this->array[i] * other[i];
    }

    /* Returning value */
    return dot_prod;
}

template<class T>
lab::vector<T> &lab::vector<T>::operator*(const int num) const {

    /* Initializing variables */
    vector<T> tmp(*this);

    /* Main part */
    for (std::size_t i = 0; i < this->size(); ++i) {
        tmp[i] *= num;
    }

    /* Returning value */
    return tmp;
}

template<class T>
lab::vector<T> &lab::vector<T>::operator=(const lab::vector<T> &other) {

    /* Main part */
    delete[] this->array;

    this->array = new T[other.size()];
    std::copy(other.begin(), other.end(), this->begin());

    /* Returning value */
    return *this;
}

template<class T>
double lab::vector<T>::length() const {

    /* Initializing variables */
    double l = 0.0;

    /* Main part */
    for (std::size_t i = 0; i < this->size(); ++i) {
        l += this->array[i] * this->array[i];
    }

    /* Returning value */
    return sqrt(l);
}

template<class T>
T lab::vector<T>::at(std::size_t pos) const {

    /* VarCheck */
    if (pos >= this->size()) {
        throw std::out_of_range("pos >= size()");
    }

    /* Returning value */
    return this->array[pos - 1];
}

template<class T>
T lab::vector<T>::front() const {

    /* Returning value */
    return this->array[FROM];
}

template<class T>
T lab::vector<T>::back() const {

    /* Returning value */
    return this->array[TO];
}

template<class T>
T *lab::vector<T>::data() const {

    /* Returning value */
    return this->array;
}

template<class T>
bool lab::vector<T>::empty() const {

    /* Returning value */
    return (this->begin() == this->end());
}

template<class T>
typename lab::vector<T>::iterator lab::vector<T>::insert(lab::vector<T>::iterator pos, const T &value) {

    /* Main part */
    this->increase_size();
    if (pos == this->end()) {
        this->increase_size();
    }
}

template<class T>
void lab::vector<T>::increase_max_size_by_thresh() {

    /* Initializing variables */
    vector<T> tmp(*this);

    /* Main part */
    delete[] this->array;
    max_size += thresh;
    this->array = new T[max_size];
    this->TO = _size;
    std::copy(tmp.begin(), tmp.end(), this->begin());
}

template<class T>
void lab::vector<T>::increase_size() {

    /* Main part */
    if (++this->size() >= this->max_size) {
        this->increase_max_size_by_thresh();
    }
    ++this->TO;
}
