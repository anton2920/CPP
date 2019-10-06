#ifndef LAB_DEV_STUDENT_HPP
#define LAB_DEV_STUDENT_HPP

/* Header inclusion */
#include <iostream>
#include <string>
#include <ctime>

class student {

    /* Fields */
private:
    std::string last_name = "Ivanov";
    std::string first_name = "Ivan";
    std::string third_name = "Ivanovich";

    struct date {
        std::time_t day;
        std::time_t month;
        std::time_t year;
    } dob {1, 1, 2000};
    std::string address = "Pushkina st., Kolotushkina house";
    unsigned long phone = 89000000000;

    std::string faculty = "FIT";
    std::size_t course = 1;

    /* Methods */
public:
    student();
    student(const std::string &lastName, const std::string &firstName, const std::string &thirdName, const date &dob,
            const std::string &address, unsigned long phone, const std::string &faculty, size_t course);
    student(student &);
    virtual ~student();

    /* Getters */
    const std::string &getLastName() const;
    const std::string &getFirstName() const;
    const std::string &getThirdName() const;
    const date &getDob() const;
    const std::string &getAddress() const;
    unsigned long getPhone() const;
    const std::string &getFaculty() const;
    size_t getCourse() const;
};


#endif