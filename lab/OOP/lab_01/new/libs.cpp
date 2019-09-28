#include "libs.hpp"
#include "marr.hpp"

/* Assume: array is sorted in ascending order */
void task_14(marr &array) {

    /* Initializing variables */
    std::size_t i;

    /* Main part */
    for (i = 0; i < array.getNelem() && array[i] <= 0; ++i)
        ;

    array.setNelem(array.getNelem() - (array.getNelem() - i));
}

/* Assume: array is sorted in ascending order */
bool task_19(marr *array) {

    /* Initializing variables */
    std::size_t count = 0;
    double mean = 0;

    /* Main part */
    for (std::size_t i = 0; i < array->getNelem(); ++i) {
        if (!(static_cast<int>(array->getElem(i)) & 1)) { /* number is even */
            mean += array->getElem(i);
            ++count;
        }
    }

    return array->insert_after(0, mean / count);
}

int task_4_cmp(const void *aa1, const void *aa2) {

    /* Initializing variables */
    auto *a1 = (double *) aa1, *a2 = (double *) aa2;

    /* Main part */
    if (std::abs(*a1) <= 1 && std::abs(*a2) > 1) {
        return -1;
    } else if (std::abs(*a1) > 1 && std::abs(*a2) <= 1) {
        return 1;
    } else {
        return 0;
    }
}

/* Delta epsilon sh**t */
void task_9(marr *array) {

    /* Initializing variables */
    double max_max = 0;

    /* Main part */
    for (std::size_t i = 0; i < array->getNelem(); ++i) {
        if (array->getElem(i) - std::floor(array->getElem(i)) > max_max) {
            max_max = array->getElem(i) - std::floor(array->getElem(i));
        }
    }

    for (std::size_t i = 0; i < array->getNelem(); ++i) {
        if (array->getElem(i) - std::floor(array->getElem(i)) > max_max - EPS &&
                array->getElem(i) - std::floor(array->getElem(i)) < max_max + EPS) {
            array->setElem(i, 0);
        }
    }
}

void write_array(const char *str, marr &array) {

    /* Initializing variables */
    std::size_t i;

    /* I/O flow */
    std::cout << str;
    for (i = 0; i < array.getNelem(); ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int num_cmp(const void *aa1, const void *aa2) {

    /* Initializing variables */
    auto *a1 = (double *) aa1;
    auto *a2 = (double *) aa2;

    /* Main part */
    if (*a1 > *a2) {
        return 1;
    } else if (*a1 < *a2) {
        return -1;
    } else {
        return 0;
    }
}