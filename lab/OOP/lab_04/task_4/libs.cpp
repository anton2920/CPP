#include "libs.hpp"

void date::getSystemTime() {

    /* Main part */
    std::time_t time = std::time(nullptr);
    std::tm ct = *std::localtime(&time);

    this->day = ct.tm_mday;
    this->month = ct.tm_mon + 1;
    this->year = ct.tm_year + 1900;
}

bool date::operator<=(const date &other) const {

    /* Main part */
    if (this->year < other.year) {
        return true;
    } else if (this->month < other.month) {
        return true;
    } else if (this->day < other.day) {
        return true;
    } else {
        return (this->day == other.day && this->month == other.month && this->year == other.year);
    }
}

void date::checkDate() {

    /* Main part */
    if (month > 12) {
        throw std::out_of_range("month > 12");
    }

    if (year > 2100) {
        throw std::out_of_range("year > 2100");
    }

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (day > 29) {
                throw std::out_of_range("day > 29");
            }
        } else {
            if (day > 28) {
                throw std::out_of_range("day > 28");
            }
        }
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day > 31) {
            throw std::out_of_range("day > 31");
        }
    } else if (day > 30) {
        throw std::out_of_range("day > 30");
    }
}