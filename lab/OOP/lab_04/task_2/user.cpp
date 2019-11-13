#include <exception>

#include "user.hpp"

user::user(const std::string &login, const std::string &pass, time_t wday) : login(login), pass(pass), wday(wday) {

    /* Main part */
    if (this->wday < 0 || this->wday > 6) {
        throw std::out_of_range("wrong day");
    }
}

user::user(const user &other) {

    /* Initializing variables */
    this->login = other.login;
    this->pass = other.pass;
    this->wday = other.wday;
}

user &user::operator=(const user &other) = default;

bool user::operator<(const user &other) const {

    /* Returning value */
    return this->login < other.login;
}

bool user::operator==(const user &other) const {

    /* Returning value */
    return this->login == other.login && this->pass == other.pass && this->wday == other.wday;
}

user::~user() = default;

std::ostream &operator<<(std::ostream &stream, const user &u) {

    /* I/O flow */
    stream << "User's login: " << u.login <<
        std::endl << "User's password: " << u.pass <<
        std::endl << "Last visit was on ";

    switch (u.wday) {
        case 0:
            stream << "Sunday";
            break;
        case 1:
            stream << "Monday";
            break;
        case 2:
            stream << "Tuesday";
            break;
        case 3:
            stream << "Wednesday";
            break;
        case 4:
            stream << "Thursday";
            break;
        case 5:
            stream << "Friday";
            break;
        case 6:
            stream << "Saturday";
            break;
    }

    /* Final output */
    stream << std::endl;

    /* Returning value */
    return stream;
}

std::istream &operator>>(std::istream &stream, user &u) {

    /* I/O flow */
    stream >> u.login >> u.pass >> u.wday;
    if (u.wday < 0 || u.wday > 6) {
        throw std::out_of_range("wrong day");
    }

    /* Returning value */
    return stream;
}

const std::string &user::getLogin() const {

    /* Returning value */
    return login;
}

const std::string &user::getPass() const {

    /* Returning value */
    return pass;
}

time_t user::getWday() const {

    /* Returning value */
    return wday;
}

void user::setLogin(const std::string &_login) {

    /* Initializing variables */
    user::login = _login;
}

void user::setPass(const std::string &_pass) {

    /* Initializing variables */
    user::pass = _pass;
}

void user::setWday(time_t _wday) {

    /* Initializing variables */
    user::wday = _wday;
    if (this->wday < 0 || this->wday > 6) {
        throw std::out_of_range("wrong day");
    }
}