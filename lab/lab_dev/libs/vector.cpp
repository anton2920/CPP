#include <exception>

#include "vector.hpp"

template<class T>
lab::vector<T>::vector() {

    /* Main part */
    array = new T[thresh];
}

template<class T>
lab::vector<T>::vector(const vector<T> &other) {

    /* Main part */
    array = new T[other.max_size];
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

    /* Main part */

}
