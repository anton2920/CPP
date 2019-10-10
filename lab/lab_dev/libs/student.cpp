#include "student.hpp"

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

void student::setLastName(const std::string &lastName) {

    /* Main part */
    last_name = lastName;
}

void student::setFirstName(const std::string &firstName) {

    /* Main part */
    first_name = firstName;
}

void student::setThirdName(const std::string &thirdName) {

    /* Main part */
    third_name = thirdName;
}

void student::setDob(const student::date &dobrth) {

    /* Main part */
    student::dob = dobrth;
}

void student::setAddress(const std::string &addr) {

    /* Main part */
    student::address = addr;
}

void student::setPhone(unsigned long ph) {

    /* Main part */
    student::phone = ph;
}

void student::setFaculty(const std::string &fac) {

    /* Main part */
    student::faculty = fac;
}

void student::setCourse(size_t crs) {

    /* Main part */
    student::course = crs;
}

void student::printStudentInfo() {

    /* Main part */
    std::cout << "Last name: " << this->last_name << std::endl;
    std::cout << "First name: " << this->first_name << std::endl;
    std::cout << "Third name: " << this->third_name << std::endl;

    std::printf("Date of birth: %ld.%ld.%ld\n", this->dob.day, this->dob.month, this->dob.year);

    std::cout << "Address: " << this->address << std::endl;
    std::cout << "Phone: " << this->phone << std::endl;

    std::cout << "Faculty: " << this->faculty << std::endl;
    std::cout << "Course: " << this->course << std::endl;
}
