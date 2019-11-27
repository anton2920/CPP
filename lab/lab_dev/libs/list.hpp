#ifndef LAB_DEV_LIST_HPP
#define LAB_DEV_LIST_HPP

#include <iostream>

#endif

namespace lab {
    template<class T>
    class list {
    public:
        class node {
            T value;
            std::size_t size;

            node *prev;
            node *next;
        };
    private:
        node *bp;
        node *lp;
        std::size_t size;

    public:
        list();
        list(const list &l);
        ~list();
    };
}