#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusion */
#include <string>
#include <ctime>

#include "list.hpp"
#include "stack.hpp"

/* New data types */
class student {
public:
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

        date &operator=(const date *other);
        date &operator=(nullptr_t);

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
//                    std::cout << "Type day: ";
                    in >> d.day;
//                    std::cout << "Type month: ";
                    in >> d.month;
//                    std::cout << "Type year: ";
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

private:
    std::string last_name{};
    std::string first_name{};
    date dob{};

public:
    explicit student(const std::string &lastName = "", const std::string &firstName = "", const date &dob = date(0, 0, 0));
    student(const student &other);

    const std::string &getLastName() const;
    const std::string &getFirstName() const;
    const date &getDob() const;

    void setLastName(const std::string &_lastName);
    void setFirstName(const std::string &_firstName);
    void setDob(const date &_dob);

    friend std::ostream &operator<<(std::ostream &stream, const student &s);
    friend std::istream &operator>>(std::istream &stream, student &s);
};

/* Functions' declarations */
int menu();
void show(lab::list<int> &l);
void show(lab::list<lab::stack<student>> &l);

#endif
