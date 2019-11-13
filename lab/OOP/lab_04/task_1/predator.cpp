#include "predator.hpp"

predator::predator(char *_type, animal::continent _habitat,
        time_t alifeT, std::size_t _aspeed) : animal(_type, _habitat, alifeT), aspeed(_aspeed) {}

predator::predator(const predator &other) : animal(other) {

    /* Initializing variables */
    this->aspeed = other.aspeed;
}

std::ostream &operator<<(std::ostream &stream, predator &p) {

    /* I/O flow */
    stream << dynamic_cast<animal &>(p);

    stream << "Average speed: " << p.aspeed << std::endl;

    /* Returning value */
    return stream;
}

std::istream &operator>>(std::istream &stream, predator &p) {

    /* I/O flow */
    stream >> dynamic_cast<animal &>(p);

    std::cout << "Type average speed: ";
    stream >> p.aspeed;

    /* Returning value */
    return stream;
}

size_t predator::getAspeed() const {

    /* Returning value */
    return aspeed;
}

void predator::setAspeed(size_t _aspeed) {

    /* Initializing variables */
    predator::aspeed = _aspeed;
}

predator::~predator() = default;
