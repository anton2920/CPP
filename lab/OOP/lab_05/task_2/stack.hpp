#ifndef LAB_DEV_STACK_HPP
#define LAB_DEV_STACK_HPP

#include "list.hpp"

namespace lab {
    template <class T>
    class stack {
        list<T> l;

    public:
        stack();
        stack(const stack &other);
        ~stack();

        class iterator : lab::list<T>::iterator {};

        T top();

        bool empty();
        std::size_t size();

        void push(const T &elem);
        void pop();

        void swap(stack &other);

        friend std::ostream &operator<<(std::ostream &stream, stack &s) {

            /* I/O flow */
            std::cout << "{ ";
            for (auto &i : s.l) {
                std::cout << i << " ";
            }
            std::cout << "}";

            /* Returning value */
            return stream;
        }

        friend std::istream &operator>>(std::istream &stream, stack &s) {

            /* Initializing variables */
            T elem;
            std::size_t count;

            /* I/O flow */
            stream >> count;

            for (std::size_t i = 0; i < count; ++i) {
                stream >> elem;
                s.push(elem);
            }

            /* Returning value */
            return stream;
        }

        bool operator<(stack &other) {

            /* Returning value */
            return (this->size() < other.size());
        }
    };

    template<class T>
    stack<T>::stack() : l() {}

    template<class T>
    stack<T>::stack(const stack &other) : l(l) {

        /* VarCheck */
        if (other == nullptr) {
            return;
        }

        /* Main part */
        for (auto iter = l.begin(); iter != l.end(); ++iter) {
            this->push(*iter);
        }
    }

    template<class T>
    stack<T>::~stack() {

        /* Main part */
        l.clear();
    }

    template<class T>
    T stack<T>::top() {

        /* Returning value */
        return l.front();
    }

    template<class T>
    bool stack<T>::empty() {

        /* Returning value */
        return l.empty();
    }

    template<class T>
    std::size_t stack<T>::size() {

        /* Returning value */
        return l.size();
    }

    template<class T>
    void stack<T>::push(const T &elem) {

        /* Main part */
        l.push_back(elem);
    }

    template<class T>
    void stack<T>::pop() {

        /* Main part */
        l.pop_back();
    }

    template<class T>
    void stack<T>::swap(stack &other) {

        /* Main part */
        std::swap(this->l, other.l);
    }
}

#endif
