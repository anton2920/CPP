#include <memory.h>
#include <cassert>
#include "animal.hpp"
#include <exception>

animal::animal(char *_type, animal::continent _habitat, time_t alifeT) : habitat(_habitat), alife_t(alifeT) {

    /* Main part */
    this->type = strdup(_type);
    assert(this->type != nullptr);
}

animal::animal(const animal &other) {

    /* Main part */
    this->type = strdup(other.type);
    assert(this->type != nullptr);
    this->habitat = other.habitat;
    this->alife_t = other.alife_t;
}

animal &animal::operator=(const animal &other) {

    /* Main part */
    this->type = strdup(other.type);
    assert(this->type != nullptr);
    this->habitat = other.habitat;
    this->alife_t = other.alife_t;

    /* Returning value */
    return *this;
}

animal::~animal() {

    /* Main part */
    free(this->type);
}

std::ostream &operator<<(std::ostream &stream, const animal &a) {

    /* I/O flow */
    stream << "----\t----\t----\n" <<
        "Animal: " << a.type << std::endl;

    switch (a.habitat) {
        case animal::NONE:
            stream << "NONE";
            break;
        case animal::Asia:
            stream << "Asia";
            break;
        case animal::Africa:
            stream << "Africa";
            break;
        case animal::North_America:
            stream << "North America";
            break;
        case animal::South_America:
            stream << "South America";
            break;
        case animal::Antarctica:
            stream << "Antarctica";
            break;
        case animal::Europe:
            stream << "Europe";
            break;
        case animal::Australia:
            stream << "Australia";
            break;
    }

    stream << std::endl << "Average life time: " << a.alife_t <<
        "----\t----\t----\n";

    /* Returning value */
    return stream;
}

std::istream &operator>>(std::istream &stream, animal &a) {

    /* Initializing variables */
    std::string tmp;

    /* I/O flow */
    std::cout << "Type animal's type: ";
    stream >> tmp;

    a.setType(tmp.data());

    for ( ;; ) {
        try {
            std::cout << "Type animal's habitat: ";
            stream >> tmp;

            if (tmp == "Asia") {
                a.habitat = animal::Asia;
            } else if (tmp == "Africa") {
                a.habitat = animal::Africa;
            } else if (tmp == "North America") {
                a.habitat = animal::North_America;
            } else if (tmp == "South America") {
                a.habitat = animal::South_America;
            } else if (tmp == "Europe") {
                a.habitat = animal::Europe;
            } else if (tmp == "Antarctica") {
                a.habitat = animal::Antarctica;
            } else if (tmp == "Australia") {
                a.habitat = animal::Australia;
            } else {
                throw std::out_of_range("continent doesn't exist");
            }
            break;
        } catch (...) {
            continue;
        }
    }

    std::cout << "Type average life time: ";
    stream >> a.alife_t;

    /* Final output */
    std::cout << std::endl;

    /* Returning value */
    return stream;
}

char *animal::getType() const {
    return type;
}

animal::continent animal::getHabitat() const {
    return habitat;
}

time_t animal::getAlifeT() const {
    return alife_t;
}

void animal::setType(char *_type) {

    /* Main part */
    this->type = strdup(_type);
    assert(this->type != nullptr);
}

void animal::setHabitat(animal::continent _habitat) {

    /* Initializing variables */
    this->habitat = _habitat;
}

void animal::setAlifeT(time_t _alifeT) {

    /* Initializing variables */
    alife_t = _alifeT;
}

