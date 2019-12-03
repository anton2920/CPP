#ifndef LAB_DEV_LIST_HPP
#define LAB_DEV_LIST_HPP

#include <iostream>
#include <algorithm>

namespace lab {
    template<class T>
    class list {
    public:
        class node {
            friend class list;

            T value;

            node *prev;
            node *next;
        };
    private:
        node *bp;
        node *lp;
        std::size_t _size{};

    public:
        list();
        list(const list &other);
        ~list();

        class iterator {
            friend class list;
        private:
            node *elem;

        public:
            explicit iterator(node *_node = nullptr) {

                /* Initializing variables */
                this->elem = _node;
            }

            iterator &operator=(const iterator &other) {

                /* Main part */
                this->elem = other.elem;

                /* Returning value */
                return *this;
            }

            iterator &operator=(node *_node) {

                /* Main part */
                this->elem = _node;

                /* Returning value */
                return *this;
            }

            iterator &operator++() {
                this->elem = this->elem->next;

                /* Returning value */
                return *this;
            }

            iterator &operator--() {

                /* Main part */
                this->elem = this->elem->prev;

                /* Returning value */
                return *this;
            }

            iterator operator+(std::size_t offset) {

                /* Initializing variables */
                iterator iter = *this;

                for (std::size_t i = 0; i < offset; ++i) {
                    ++iter;
                }

                /* Returning value */
                return iter;
            }

            bool operator==(const iterator &other) {

                /* Returning value */
                return (this->elem == other.elem);
            }

            bool operator!=(const iterator &other) {

                /* Returning value */
                return (this->elem != other.elem);
            }

            T &operator*() {

                /* Returning value */
                return (this->elem->value);
            }
        };

    private:
        void check_pointers();
        node *mergeSort(node *head);
        node *split(node *head);
        node *mergeSort_merge(node *first, node *second);

    public:
        T &front();
        T &back();

        iterator begin();
        iterator end();

        bool empty();
        std::size_t size();

        void clear();

        iterator insert(iterator pos, const T &elem);
        iterator erase(iterator pos);

        void push_back(const T &elem);
        void pop_back();
        void push_front(const T &elem);
        void pop_front();

        void swap(list &other);

        void sort();
    };

    template<class T>
    list<T>::list() {

        /* Main part */
        this->lp = this->bp = nullptr;
        this->_size = 0lu;
    }

    template<class T>
    list<T>::list(const list &other) : list() {

        /* VarCheck */
        if (other == nullptr) {
            return;
        }

        for (auto iter = begin(); iter != end(); ++iter) {
            this->push_back(*iter);
        }
    }

    template<class T>
    list<T>::~list() {

        /* Main part */
        clear();
    }

    template<class T>
    void list<T>::check_pointers() {

        /* Main part */
        if (this->bp != nullptr && this->lp == nullptr) {
            this->lp = this->bp;
        } else if (this->lp != nullptr && this->bp == nullptr) {
            this->bp = this->lp;
        }
    }

    template<class T>
    T &list<T>::front() {

        /* Returning value */
        return *this->begin();
    }

    template<class T>
    T &list<T>::back() {

        /* Returning value */
        return *this->end();
    }

    template<class T>
    typename list<T>::iterator list<T>::begin() {

        /* Initializing variables */
        lab::list<T>::iterator iter(this->bp);

        /* Returning value */
        return iter;
    }

    template<class T>
    typename list<T>::iterator list<T>::end() {

        /* Initializing variables */
        lab::list<T>::iterator iter(this->lp->next);

        /* Returning value */
        return iter;
    }

    template<class T>
    bool list<T>::empty() {

        /* Returning value */
        return (this->_size);
    }

    template<class T>
    std::size_t list<T>::size() {

        /* Returning value */
        return (this->_size);
    }

    template<class T>
    void list<T>::clear() {

        /* Main part */
        while (this->_size) {
            pop_back();
        }
    }

    template<class T>
    typename list<T>::iterator list<T>::insert(list::iterator pos, const T &elem) {

        /* Initializing variables */
        auto new_element = new lab::list<T>::node;

        /* VarCheck */
        if (pos.elem == nullptr) {
            return pos;
        }

        /* Main part */
        new_element->value = elem;

        if (this->bp == nullptr) {
            new_element->next = nullptr;
            new_element->prev = nullptr;
            this->bp = this->lp = new_element;
        } else if (pos.elem != nullptr) {
            new_element->next = pos.elem;
            new_element->prev = pos.elem->prev;

            if (pos.elem->prev != nullptr) {
                pos.elem->prev->next = new_element;
            }
            pos.elem->prev = new_element;

            if (new_element->prev == nullptr) {
                this->bp = new_element;
            } else if (new_element->next == nullptr) {
                this->lp = new_element;
            }

            this->check_pointers();
        }

        ++this->_size;

        lab::list<T>::iterator iter(new_element);

        /* Returning value */
        return iter;
    }

    template<class T>
    typename list<T>::iterator list<T>::erase(list::iterator pos) {

        /* Initializing variables */
        lab::list<T>::iterator ret;

        /* VarCheck */
        if (pos.elem == nullptr) {
            return pos;
        }

        /* Main part */
        if (pos.elem->prev != nullptr) {
            pos.elem->prev->next = pos.elem->next;
        } else {
            this->bp = pos.elem->next;
        }
        if (pos.elem->next != nullptr) {
            pos.elem->next->prev = pos.elem->prev;
        } else {
            this->lp = pos.elem->prev;
        }

        if (pos.elem->next == nullptr) {
            ret = this->lp;
        } else {
            ret = pos.elem->next;
        }

        delete (pos.elem);

        --this->_size;

        this->check_pointers();

        /* Returning value */
        return ret;
    }

    template<class T>
    void list<T>::push_back(const T &elem) {

        /* Initializing variables */
        auto new_element = new lab::list<T>::node;

        /* Main part */
        new_element->value = elem;

        if (this->bp == nullptr) {
            new_element->next = nullptr;
            new_element->prev = nullptr;
            this->bp = this->bp = new_element;
        } else {
            new_element->next = nullptr;
            new_element->prev = this->lp;
            this->lp->next = new_element;

            this->lp = new_element;
        }

        ++this->_size;

        this->check_pointers();
    }

    template<class T>
    void list<T>::pop_back() {

        /* Main part */
        this->erase(lab::list<T>::iterator(this->lp));
    }

    template<class T>
    void list<T>::push_front(const T &elem) {

        /* Main part */
        this->insert(this->begin(), elem);
    }

    template<class T>
    void list<T>::pop_front() {

        /* Main part */
        this->erase(this->begin());
    }

    template<class T>
    void list<T>::swap(list &other) {

        /* Initializing variables */
        lab::list<T> tmp;

        /* Main part */
        tmp.bp = other.bp;
        tmp.lp = other.lp;
        tmp._size = other._size;

        other.bp = this->bp;
        other.lp = this->lp;
        other._size = this->_size;

        this->bp = tmp.bp;
        this->lp = tmp.lp;
        this->_size = tmp._size;
    }

    template<class T>
    void list<T>::sort() {

        /* Initializing variables */
        auto iter = this->bp;

        /* Main part */
        this->bp = mergeSort(this->bp);

        for ( ; iter->next != nullptr; iter = iter->next)
            ;

        this->lp = iter;

        this->check_pointers();
    }

    template<class T>
    typename list<T>::node *list<T>::mergeSort(list::node *head) {

        /* VarCheck */
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        /* Initializing variables */
        auto second = this->split(head);

        /* Main part */
        head = mergeSort(head);
        second = mergeSort(second);

        return this->mergeSort_merge(head, second);
    }

    template<class T>
    typename list<T>::node *list<T>::split(list::node *head) {

        /* Initializing variables */
        auto fast = head, slow = head;

        /* Main part */
        for ( ; fast->next != nullptr && fast->next->next != nullptr; fast = fast->next->next, slow = slow->next)
            ;

        auto temp = slow->next;
        slow->next = nullptr;

        /* Returning value */
        return temp;
    }

    template<class T>
    typename list<T>::node *list<T>::mergeSort_merge(list::node *first, list::node *second) {

        /* VarCheck */
        if (first == nullptr) {
            return second;
        } else if (second == nullptr) {
            return first;
        }

        /* Main part */
        if (first->value < second->value) {
            first->next = this->mergeSort_merge(first->next, second);
            first->next->prev = first;
            first->prev = nullptr;

            return first;
        } else {
            second->next = this->mergeSort_merge(first, second->next);
            second->next->prev = second;
            second->prev = nullptr;

            return second;
        }
    }
}

#endif