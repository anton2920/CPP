#include "pharmacy.hpp"

pharmacy::pharmacy(const std::string &name, size_t quantity, const pharmacy::date &prodDate, time_t expiration,
                   const std::string &type, std::size_t price) : name(name), quantity(quantity), prod_date(prodDate),
                                               expiration(expiration), type(type), price(price) {}

pharmacy::pharmacy(const pharmacy &other) {

    /* Main part */
    this->name = other.name;
    this->quantity = other.quantity;
    this->prod_date = other.prod_date;
    this->expiration = other.expiration;
    this->type = other.type;
    this->price = other.price;
}

std::ostream &operator<<(std::ostream &out, const pharmacy &p) {

    /* I/O flow */
    out << "Name: " << p.name << std::endl;
    out << "Quantity: " << p.quantity << std::endl;
    out << "Production date: " << p.prod_date << std::endl;
    out << "Expiration: " << p.expiration << std::endl;
    out << "Type: " << p.type << std::endl;
    out << "Price: " << p.price << std::endl;

    /* Returning value */
    return out;
}

std::istream &operator>>(std::istream &in, pharmacy &p) {

    /* I/O flow */
    std::cout << "Type name: ";
    in >> p.name;

    std::cout << "Type quantity: ";
    in >> p.quantity;

    std::cout << "Type production date: ";
    in >> p.prod_date.day >> p.prod_date.month >> p.prod_date.year;

    std::cout << "Type expiration (in month): ";
    in >> p.expiration;

    std::cout << "Type the drug type: ";
    in >> p.type;

    std::cout << "Type price: ";
    in >> p.price;

    /* Returning value */
    return in;
}

bool pharmacy::operator<(const pharmacy &other) const {

    /* Main part */
    if (this->type < other.type) {
        return true;
    } else return this->type == other.type && this->name < other.name;
}

const std::string &pharmacy::getName() const {
    return name;
}

size_t pharmacy::getQuantity() const {
    return quantity;
}

const pharmacy::date &pharmacy::getProdDate() const {
    return prod_date;
}

time_t pharmacy::getExpiration() const {
    return expiration;
}

void pharmacy::setName(const std::string &_name) {
    pharmacy::name = _name;
}

void pharmacy::setQuantity(size_t _quantity) {
    pharmacy::quantity = _quantity;
}

void pharmacy::setProdDate(const pharmacy::date &prodDate) {
    prod_date = prodDate;
}

void pharmacy::setExpiration(time_t _expiration) {
    pharmacy::expiration = _expiration;
}

const std::string &pharmacy::getType() const {
    return type;
}

void pharmacy::setType(const std::string &_type) {
    pharmacy::type = _type;
}

size_t pharmacy::getPrice() const {
    return price;
}

void pharmacy::setPrice(size_t _price) {
    pharmacy::price = _price;
}

pharmacy::~pharmacy() = default;

pharmacy::date pharmacy::date::operator+(std::time_t days) const {

    /* Initializing variables */
    date tmp;

    /* Main part */
    tmp.day = this->day + days;

    if (tmp.day > 30) {
        tmp.month += tmp.day / 30;
        tmp.day %= 30;
    }

    if (tmp.month > 12) {
        tmp.year += tmp.month / 12;
        tmp.month %= 12;
    }

    /* Returning value */
    return tmp;
}

pharmacy::date::date(const std::initializer_list<date> &l) {

    /* Main part */
    if (l.size() == 1) {
        this->day = l.begin()->day;
        this->month = l.begin()->month;
        this->year = l.begin()->month;
    }
}

pharmacy::date pharmacy::date::operator+(const pharmacy::date &other) const {

    /* Initializing variables */
    date tmp;

    /* Main part */
    tmp.day = this->day + other.day;
    tmp.month = this->month + other.month;
    tmp.year = this->year + other.year;

    if (tmp.day > 30) {
        tmp.month += tmp.day / 30;
        tmp.day %= 30;
    }

    if (tmp.month > 12) {
        tmp.year += tmp.month / 12;
        tmp.month %= 12;
    }

    /* Returning value */
    return tmp;
}

pharmacy::date pharmacy::date::operator-(const pharmacy::date &other) const {

    /* Initializing variables */
    date tmp{};

    /* Main part */
    tmp.day = this->day - other.day;
    tmp.month = this->month - other.month;
    tmp.year = this->year - other.year;

    if (tmp.day < 0) {
        --tmp.month;
        tmp.day += 30;
    }

    if (tmp.month < 0) {
        --tmp.year;
        tmp.month += 12;
    }

    /* Returning value */
    return tmp;
}

void pharmacy::date::getSystemTime() {

    /* Main part */
    std::time_t time = std::time(nullptr);
    std::tm ct = *std::localtime(&time);

    this->day = ct.tm_mday;
    this->month = ct.tm_mon + 1;
    this->year = ct.tm_year + 1900;
}

bool pharmacy::date::operator<=(const pharmacy::date &other) const {

    /* Main part */
    if (this->year <= other.year) {
        if (this->month <= other.month) {
            if (this->day <= other.day) {
                return true;
            }
        }
    }

    /* Returning value */
    return false;
}
