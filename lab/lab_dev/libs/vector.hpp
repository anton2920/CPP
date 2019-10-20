#ifndef LAB_DEV_VECTOR_HPP
#define LAB_DEV_VECTOR_HPP

#include <iostream>
#include <iterator>

namespace lab {
    template<class T>
    class vector {
    private:
        const std::size_t thresh = 16;

        static T *array;

        std::size_t _size = 0;
        std::size_t max_size = thresh;

        T FROM = 0;
        T TO = _size;

        void increase_size();
        void increase_max_size_by_thresh();

    public:
        vector();
        vector(const vector &ohter);

        class iterator : public std::iterator<std::random_access_iterator_tag, T, T, T *, T> {
        private:
            T *elem;
        public:
            explicit iterator(std::size_t ind = 0) {

                /* Main part */
                elem = array + ind;
            }
            iterator &operator++() {
                elem = TO >= FROM ? (array + 1) : (array - 1);
                return *this;
            }
            iterator operator++(int) {
                iterator retval = *this;
                ++(*this);
                return retval;
            }
            bool operator==(iterator other) const { return elem == other.elem; }
            bool operator!=(iterator other) const { return !(*this == other); }
            T operator*() const { return *elem; }
        };

        iterator begin() { return iterator(FROM); }
        iterator end() { return iterator(TO >= FROM ? TO + 1 : TO - 1); }

        [[nodiscard]] std::size_t size() const;

        T operator[](std::size_t) const;
        vector &operator+(const vector &other) const;
        vector &operator-(const vector &other) const;
        int operator*(const vector &other) const;
        vector &operator*(int) const;

        vector &operator=(const vector &other);

        [[nodiscard]] double length() const;

        T at(std::size_t pos) const;
        T front() const;
        T back() const;
        T *data() const;

        [[nodiscard]] bool empty() const;

        iterator insert( iterator pos, const T& value );
    };
}


#endif
