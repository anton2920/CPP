#include "libs.hpp"
#include "student.hpp"

/* Constants */
const std::size_t MAX_SIZE = 101;

void readAllFields(student *array, std::size_t size) {

    /* Initializing variables */
    std::string ans;

    /* Main part */
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << "----\t\t\t----\n" << "Student #" << i + 1 << "\n" << "Do you want to change his (her) info? [y/n]: ";
        std::cin >> ans;

        if (ans == "Y" || ans == "y" || ans == "yes") {
            std::string tmpStr;
            std::cout << "\nType «0» in every prompt to leave default value\n";

            std::cout << "Type last name: ";
            std::cin >> tmpStr;
            if (tmpStr != "0") {
                array[i].setLastName(tmpStr);
            }

            std::cout << "Type first name: ";
            std::cin >> tmpStr;
            if (tmpStr != "0") {
                array[i].setFirstName(tmpStr);
            }

            std::cout << "Type third name: ";
            std::cin >> tmpStr;
            if (tmpStr != "0") {
                array[i].setThirdName(tmpStr);
            }

            student::date tmpDate;

            std::cout << "Type date of birth (dd.mm.yyyy): ";
            std::scanf("%ld.%ld.%ld", &tmpDate.day, &tmpDate.month, &tmpDate.year);
            if (tmpDate.day && tmpDate.month && tmpDate.year) {
                array[i].setDob(tmpDate);
            }

            std::cout << "Type address: ";
            std::cin >> tmpStr;
            if (tmpStr != "0") {
                array[i].setAddress(tmpStr);
            }

            unsigned long tmpPhone;
            std::cout << "Type phone number: ";
            std::cin >> tmpPhone;
            if (tmpPhone) {
                array[i].setPhone(tmpPhone);
            }

            std::cout << "Type faculty: ";
            std::cin >> tmpStr;
            if (tmpStr != "0") {
                array[i].setFaculty(tmpStr);
            }

            std::size_t tmpCourse;
            std::cout << "Type course: ";
            std::cin >> tmpCourse;
            if (tmpCourse) {
                array[i].setCourse(tmpCourse);
            }

        } else if (ans == "N" || ans == "n" || ans == "no") {
            continue;
        } else {
            std::cout << "Something went wrong!\n";
            --i;
        }
    }
}

size_t readSize() {

    /* Initializing variables */
    std::size_t size = 0;

    /* Main part */
    for (;;) {
        try {
            std::cout << "Type size of the array: ";
            std::cin >> size;

            if (size > MAX_SIZE) {
                throw errors::TOO_LARGE_SIZE;
            } else {
                break;
            }
        } catch (int err) {
            if (err == errors::TOO_LARGE_SIZE) {
                std::cerr << "Size must be less than 100\n";
            } else {
                std::cerr << "Other problems with size!\n";
            }
            std::cerr.flush();
        }
    }

    /* Returning value */
    return size;
}

void print_1(student *array, std::size_t size, std::string faculty) {

    /* Main part */
    for (std::size_t i = 0; i < size; ++i) {
        if (array[i].getFaculty() == faculty) {
            std::cout << "----\t\t\t----\n" << "Student #" << i + 1 << "\n";
            array[i].printStudentInfo();
            std::cout << std::endl;
        }
    }
}

void print_2(student *array, std::size_t size) {

    /* Main part */
    for (std::size_t i = 0; i < size; ++i) {
        array[i].printStudentInfo();
        std::cout << std::endl;
    }
}

void print_3(student *array, std::size_t size, std::time_t year) {

    /* Main part */
    for (std::size_t i = 0; i < size; ++i) {
        if (array[i].getDob().year > year) {
            std::cout << "----\t\t\t----\n" << "Student #" << i + 1 << "\n";
            array[i].printStudentInfo();
            std::cout << std::endl;
        }
    }
}
