#ifndef LAB_DEV_VECTOR_HPP
#define LAB_DEV_VECTOR_HPP

#include <iostream>
#include <iterator>
#include <cmath>

namespace lab {
    template<class T>
    class vector {
    private:
        const std::size_t thresh = 16;

        T *array;

        std::size_t _size = 0;

    private:
        std::size_t max_size = thresh;

        void increase_size();
        void increase_max_size_by_thresh();

    public:
        vector();
        vector(vector &other);

        typedef T* iterator;

        iterator begin() { return &this->array[0]; }
        iterator end() { return &this->array[_size]; }

        [[nodiscard]] std::size_t size() const;

        T operator[](std::size_t) const;
        lab::vector<T> operator+(const vector &other);
        lab::vector<T> operator-(const vector &other);
        T operator*(const vector &other) const;
        lab::vector<T> operator*(int);

        vector &operator=(const vector &other);

        friend std::ostream &operator<<(std::ostream &out, const vector &v) {

            /* I/O flow */
            out << "{ ";
            for (std::size_t i = 0; i < v.size(); ++i) {
                const char *str = (i == v.size() - 1) ? " " : ", ";
                out << v.data()[i] << str;
            }
            out << "}";

            /* Returning value */
            return out;
        }
        friend std::istream &operator>>(std::istream &in, vector &v) {

            /* Initializing variables */
            T elem;
            long n;

            /* I/O flow */
            for (;;) {
                try {
                    std::cout << "Type n: ";
                    in >> n;
                    if (n < 0) {
                        throw std::out_of_range("n < 0");
                    }
                    break;
                } catch (...) {
                    std::cerr << "Bad n\n" << std::flush;
                }
            }
            std::cout << "Type elements: \n";
            for (long i = 0; i < n; ++i) {
                in >> elem;
                v.push_back(elem);
            }

            /* Returning value */
            return in;
        }

        [[nodiscard]] double length() const;

        T at(std::size_t pos) const;
        T front() const;
        T back() const;
        T *data() const;

        [[nodiscard]] bool empty() const;

        iterator insert(T* pos, const T& value);
        void push_back(const T& value);

        iterator erase(T* pos);
        void pop_back();
    };
}

template<class T>
lab::vector<T>::vector() {

    /* Main part */
    this->array = new T[max_size];
}

template<class T>
lab::vector<T>::vector(vector<T> &other) {

    /* Main part */
    this->array = new T[other.max_size];
    this->_size = other.size();
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
lab::vector<T> lab::vector<T>::operator+(const lab::vector<T> &other) {

    /* Initializing variables */
    vector<T> tmp(*this);

    /* Main part */
    if (this->size() != other.size()) {
        throw std::invalid_argument("lengths are not equal");
    }

    for (std::size_t i = 0; i < this->size(); ++i) {
        tmp.array[i] = this->array[i] + other[i];
    }

    /* Returning value */
    return tmp;
}

template<class T>
lab::vector<T> lab::vector<T>::operator-(const lab::vector<T> &other) {

    /* Initializing variables */
    vector<T> tmp(*this);

    /* Main part */
    if (this->size() != other.size()) {
        throw std::invalid_argument("lengths are not equal");
    }

    for (std::size_t i = 0; i < this->size(); ++i) {
        tmp.array[i] = this->array[i] - other[i];
    }

    /* Returning value */
    return tmp;
}

template<class T>
T lab::vector<T>::operator*(const lab::vector<T> &other) const {

    /* Initializing variables */
    T dot_prod{};

    /* Main part */
    if (this->size() != other.size()) {
        throw std::invalid_argument("lengths are not equal");
    }

    for (std::size_t i = 0; i < this->size(); ++i) {
        dot_prod = dot_prod + this->array[i] * other[i];
    }

    /* Returning value */
    return dot_prod;
}

template<class T>
lab::vector<T> lab::vector<T>::operator*(const int num) {

    /* Initializing variables */
    vector<T> tmp(*this);

    /* Main part */
    for (std::size_t i = 0; i < this->size(); ++i) {
        tmp.array[i] = tmp[i] * num;
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
        l += static_cast<double>(this->array[i] * this->array[i]);
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
    return this->array[_size - 1];
}

template<class T>
T lab::vector<T>::back() const {

    /* Returning value */
    return this->array[0];
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
        *this->end() = value;
    } else {
        std::move(pos, this->end(), pos + 1);
        *pos = value;
    }

    /* Returning value */
    return pos;
}

template<class T>
void lab::vector<T>::increase_max_size_by_thresh() {

    /* Initializing variables */
    vector<T> tmp(*this);

    /* Main part */
    delete[] this->array;
    max_size += thresh;
    this->array = new T[max_size];
    std::copy(tmp.begin(), tmp.end(), this->begin());
}

template<class T>
void lab::vector<T>::increase_size() {

    /* Main part */
    if (++this->_size >= this->max_size - 1) {
        this->increase_max_size_by_thresh();
    }
}

template<class T>
void lab::vector<T>::push_back(const T &value) {

    /* Main part */
    this->insert(this->end(), value);
}

template<class T>
typename lab::vector<T>::iterator lab::vector<T>::erase(lab::vector<T>::iterator pos) {

    /* Main part */
    --this->_size;

    std::move(pos + 1, this->end, pos);

    /* Returning value */
    return pos;
}

template<class T>
void lab::vector<T>::pop_back() {

    /* Main part */
    erase(this->end());
}

#endif