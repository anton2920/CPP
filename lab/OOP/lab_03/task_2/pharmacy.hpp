#ifndef LAB_DEV_PHARMACY_HPP
#define LAB_DEV_PHARMACY_HPP

#include <iostream>
#include <ostream>
#include <ctime>

class pharmacy {
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

            if (month > 12) {
                throw std::out_of_range("month > 12");
            }

            if (year > 2100) {
                throw std::out_of_range("year > 2100");
            }

            if (month == 2) {
                if (year % 4 == 0 && year % 400 == 0) {
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
            } else if (d > 30) {
                throw std::out_of_range("day > 30");
            }
        }

        date(const std::initializer_list<date> &);

        date(const date &other) {
            this->day = other.day;
            this->month = other.month;
            this->year = other.year;
        }

        date operator+(std::time_t days) const;
        date operator+(const date &other) const;
        date operator-(const date &other) const;

        bool operator<=(const date &other) const;

        void getSystemTime();

        friend std::ostream &operator<<(std::ostream &out, const date &d) {

            /* I/O flow */
            out << "{ " << d.day << ", " << d.month << ", " << d.year << " }";

            /* Returning value */
            return out;
        }
    };
private:
    std::string name;
    std::size_t quantity;
    date prod_date;
    std::time_t expiration;     /* In months */
    /* drug_type type; */
    std::string type;
    std::size_t price;

public:
    explicit pharmacy(const std::string &name = "Unknown", size_t quantity = 0,
            const date &prodDate = {}, time_t expiration = 0, const std::string &type = "Unknown",
            std::size_t price = 0lu);
    pharmacy(const pharmacy &other);
    virtual ~pharmacy();

    friend std::ostream &operator<<(std::ostream &out, const pharmacy &p);
    friend std::istream &operator>>(std::istream &in, pharmacy &p);

    bool operator<(const pharmacy &other) const;

    [[nodiscard]] const std::string &getName() const;
    [[nodiscard]] size_t getQuantity() const;
    [[nodiscard]] const date &getProdDate() const;
    [[nodiscard]] time_t getExpiration() const;
    [[nodiscard]] const std::string &getType() const;
    [[nodiscard]] size_t getPrice() const;

    void setName(const std::string &_name);
    void setQuantity(size_t _quantity);
    void setProdDate(const date &prodDate);
    void setExpiration(time_t _expiration);
    void setType(const std::string &_type);
    void setPrice(size_t _price);
};


#endif