#include "student.hpp"

student::student() {};

student::student(const std::string &lastName, const std::string &firstName, const std::string &thirdName,
                 const student::date &dob, const std::string &address, unsigned long phone, const std::string &faculty,
                 size_t course) : last_name(lastName), first_name(firstName), third_name(thirdName), dob(dob),
                                  address(address), phone(phone), faculty(faculty), course(course) {}

student::student(student &other) {

    /* Main part */
    this->last_name = other.last_name;
    this->first_name = other.first_name;
    this->third_name = other.third_name;

    this->dob = other.dob;
    this->address = other.address;
    this->phone = other.phone;

    this->faculty = other.faculty;
    this->course = other.course;
}


/* I've added a virtual destructor now 'cause CLion
 * always seems to add one, but I'm unsure
 * what it does
 */
student::~student() {

    /* Main part */
    /* Destructs stuff */
}

const std::string &student::getLastName() const {

    /* Returning value */
    return last_name;
}

const std::string &student::getFirstName() const {

    /* Returning value */
    return first_name;
}

const std::string &student::getThirdName() const {

    /* Returning value */
    return third_name;
}

const student::date &student::getDob() const {

    /* Returning value */
    return dob;
}

const std::string &student::getAddress() const {

    /* Returning value */
    return address;
}

unsigned long student::getPhone() const {

    /* Returning value */
    return phone;
}

const std::string &student::getFaculty() const {

    /* Returning value */
    return faculty;
}

size_t student::getCourse() const {

    /* Returning value */
    return course;
}