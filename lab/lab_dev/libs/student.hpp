#ifndef LAB_DEV_STUDENT_HPP
#define LAB_DEV_STUDENT_HPP

/* Header inclusion */
#include <iostream>
#include <string>
#include <ctime>

class student {

public:
    struct date {
        std::time_t day;
        std::time_t month;
        std::time_t year;
    };

    /* Fields */
private:
    std::string last_name;
    std::string first_name;
    std::string third_name;

    date dob;

    std::string address;
    unsigned long phone;

    std::string faculty;
    std::size_t course;

    /* Methods */
public:
    student(const std::string &lastName = "Ivanov", const std::string &firstName = "Ivan",
            const std::string &thirdName = "Ivanovich", const date &dob = {1, 1, 2000},
            const std::string &address = "Pushkina st., Kolotushkina house", unsigned long phone = 89000000000,
            const std::string &faculty = "FIT", size_t course = 1);
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

    /* Setters */
    void setLastName(const std::string &lastName);
    void setFirstName(const std::string &firstName);
    void setThirdName(const std::string &thirdName);
    void setDob(const date &dobrth);
    void setAddress(const std::string &addr);
    void setPhone(unsigned long ph);
    void setFaculty(const std::string &fac);
    void setCourse(size_t crs);

    /* Output */
    void printStudentInfo();
};


#endif