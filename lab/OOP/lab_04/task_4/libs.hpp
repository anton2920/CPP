#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusion */
#include <iostream>
#include <ctime>

/* Macro definitions */

/* Type definitions */
struct date {
    std::time_t day;
    std::time_t month;
    std::time_t year;

    date() {
        this->day = 01;
        this->month = 01;
        this->year = 2000;
    }

    explicit date(std::time_t d, std::time_t m, std::time_t y) {
        day = d;
        month = m;
        year = y;

        checkDate();
    }

    date(const date &other) {
        this->day = other.day;
        this->month = other.month;
        this->year = other.year;
    }

    bool operator<=(const date &other) const;

    void getSystemTime();

    friend std::ostream &operator<<(std::ostream &out, const date &d) {

        /* I/O flow */
        out << "{ " << d.day << ", " << d.month << ", " << d.year << " }";

        /* Returning value */
        return out;
    }

    friend std::istream &operator>>(std::istream &in, date &d) {

        /* I/O flow */
        for ( ;; ) {
            try {
                std::cout << "Type day: ";
                in >> d.day;
                std::cout << "Type month: ";
                in >> d.month;
                std::cout << "Type year: ";
                in >> d.year;

                d.checkDate();
                break;
            } catch (...) {
                continue;
            }
        }

        /* Returning value */
        return in;
    }

    void checkDate();
};

/* Functions' declarations */

#endif