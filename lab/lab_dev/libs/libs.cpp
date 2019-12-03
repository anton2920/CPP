#include "libs.hpp"

void student::date::getSystemTime() {

    /* Main part */
    std::time_t time = std::time(nullptr);
    std::tm ct = *std::localtime(&time);

    this->day = ct.tm_mday;
    this->month = ct.tm_mon + 1;
    this->year = ct.tm_year + 1900;
}

bool student::date::operator<=(const date &other) const {

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

void student::date::checkDate() {

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

student::date &student::date::operator=(const student::date *other) {

    /* VarCheck */
    if (other == nullptr) {
        this->day = 0;
        this->month = 0;
        this->year = 0;

        return *this;
    }

    /* Main part */
    this->day = other->day;
    this->month = other->month;
    this->year = other->year;

    /* Returning value */
    return *this;
}

student::date &student::date::operator=(nullptr_t) {

    /* Main part */
    this->day = 0;
    this->month = 0;
    this->year = 0;

    /* Returning value */
    return *this;
}

const std::string &student::getLastName() const {

    /* Returning value */
    return last_name;
}

const std::string &student::getFirstName() const {

    /* Returning value */
    return first_name;
}

const student::date &student::getDob() const {

    /* Returning value */
    return dob;
}

void student::setLastName(const std::string &_lastName) {

    /* Main part */
    last_name = _lastName;
}

void student::setFirstName(const std::string &_firstName) {

    /* Main part */
    first_name = _firstName;
}

void student::setDob(const student::date &_dob) {

    /* Main part */
    student::dob = _dob;
}

student::student(const std::string &lastName, const std::string &firstName, const student::date &dob) : last_name(
        lastName), first_name(firstName), dob(dob) {}

student::student(const student &other) : first_name(other.first_name), last_name(other.last_name), dob(other.dob) {}

std::ostream &operator<<(std::ostream &stream, const student &s) {

    /* I/O flow */
    std::cout << "{ " << s.last_name << ", " << s.first_name << ", " << s.dob;

    /* Returning value */
    return stream;
}

std::istream &operator>>(std::istream &stream, student &s) {

    /* I/O flow */
    std::cout << "Type last name: ";
    stream >> s.last_name;

    std::cout << "Type first name: ";
    stream >> s.first_name;

    stream >> s.dob;

    /* Returning value */
    return stream;
}

int menu() {

    /* Initializing variables */
    int ans;

    /* I/O flow */
    std::cout << "Do you want to proceed with...\n" << "\t1) Standard datatype [int]\n" <<
            "\t2) Custom datatype [stack<student>]\n\n" << "Answer: ";
    std::cin >> ans;

    /* Final output */
    std::cout << std::endl;

    /* Returning value */
    return ans;
}

void print_list(const lab::list<int> &l) {

    /* I/O flow */
    for (auto &i : l) {
        std::cout << i << " ";
    }

    std::cout << std::endl << std::endl;
}

void show(lab::list<int> &l) {

    /* Initializing variables */
    int var;

    /* Main part */
    for (int i = 0; i < 10; ++i) {
        l.push_back(rand() % 25);
    }

    std::cout << "Source list: ";
    print_list(l);

    /* push_back demo */
    var = rand() % 25;
    l.push_back(var);
    std::cout << "push_back value [" << var << "]" << ": ";
    print_list(l);

    /* push_front demo */
    var = rand() % 25;
    l.push_front(var);
    std::cout << "push_front value [" << var << "]" << ": ";
    print_list(l);

    /* insert demo */
    var = rand() % 12;
    l.insert(l.begin() + var, var);
    std::cout << "insert value [" << var << "]" << " on position " << var << ": ";
    print_list(l);

    /* erase demo */
    var = rand() % 13;
    l.erase(l.begin() + var);
    std::cout << "erase value on position " << var << ": ";
    print_list(l);

    /* Sorting */
    l.sort();
    std::cout << "Sorted list: ";
    for (auto &i : l) {
        std::cout << i << " ";
    }
}

void print_list(const lab::list<lab::stack<student>> &l) {

    /* I/O flow */
//    std::cout <<
}

void show(lab::list<lab::stack<student>> &l) {

    /* Initializing variables */
    int var;

    /* Main part */
    for (int i = 0; i < 10; ++i) {
        l.push_back(rand() % 25);
    }

    std::cout << "Source list: ";
    print_list(l);

    /* push_back demo */
    var = rand() % 25;
    l.push_back(var);
    std::cout << "push_back value [" << var << "]" << ": ";
    print_list(l);

    /* push_front demo */
    var = rand() % 25;
    l.push_front(var);
    std::cout << "push_front value [" << var << "]" << ": ";
    print_list(l);

    /* insert demo */
    var = rand() % 12;
    l.insert(l.begin() + var, var);
    std::cout << "insert value [" << var << "]" << " on position " << var << ": ";
    print_list(l);

    /* erase demo */
    var = rand() % 13;
    l.erase(l.begin() + var);
    std::cout << "erase value on position " << var << ": ";
    print_list(l);

    /* Sorting */
    l.sort();
    std::cout << "Sorted list: ";
    for (auto &i : l) {
        std::cout << i << " ";
    }
}