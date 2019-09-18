#include "libs.hpp"
#include "marr.hpp"

void task_14(marr *array) {

    /* Initializing variables */
    double *beg = nullptr, *end = nullptr;
    std::size_t best_size = 0;
    double *bbeg = beg, *bend = end;
    marr new_array(array->getNelem());
    bool flag = false;

    /* Main part */
    new_array.copy_from(array);

    for (std::size_t i = 0; i < array->getNelem(); ++i) {
        if (array->getElem(i) > 0 && !flag) {
            beg = array->getElemAddr(i);
            flag = true;
        } else if ((array->getElem(i) < 0 && flag) || i == array->getNelem() - 1) {
            end = array->getElemAddr(i);
            if (end - beg > static_cast<long int>(best_size)) {
                best_size = (i == array->getNelem() - 1) ? (end - beg) + 1 : end - beg;
                bbeg = beg;
                bend = end;
            }
            flag = false;
        }
    }
    if (beg == nullptr || end == nullptr) {
        return;
    }

    array->setNelem(array->getNelem() - best_size);

    for (std::size_t i = 0, j = 0; i < new_array.getNelem(); ++i) {
        if (array->getElemAddr(i) < bbeg || array->getElemAddr(i) >= bend) {
            array->setElem(j++, new_array[i]);
        }
    }
}

bool task_19(marr *array) {

    /* Initializing variables */
    double min = INT32_MAX;
    std::size_t min_pos = 0, count = 0;
    double mean = 0;

    /* Main part */
    for (std::size_t i = 0; i < array->getNelem(); ++i) {
        if (array->getElem(i) < min) {
            min = array->getElem(i);
            min_pos = i;
        }
        if (!(static_cast<int>(array->getElem(i)) & 1)) { /* number is even */
            mean += array->getElem(i);
            ++count;
        }
    }

    return array->insert_after(min_pos, mean / count);
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
        if (array->getElem(i) - std::floor(array->getElem(i)) == max_max) {
            array->setElem(i, 0);
        }
    }
}

void write_answer(marr *array, marr *back) {

    /* Initializing variables */
    std::size_t i;

    /* I/O flow */
    std::cout << "| Source array: ";
    for (i = 0; i < back->getNelem(); ++i) {
        std::cout << back->getElem(i) << " ";
    }
    std::cout << "\n| Answer:       ";
    for (i = 0; i < array->getNelem(); ++i) {
        std::cout << array->getElem(i) << " ";
    }
    std::cout << std::endl;

    /* Main part */
    while (std::cin.get() != '\n')
        ;

    /* Final output */
    prt_ln();
}

int num_cmp(const void *aa1, const void *aa2) {

    /* Initializing variables */
    double *a1 = (double *) aa1;
    double *a2 = (double *) aa2;

    /* Main part */
    if (*a1 > *a2) {
        return 1;
    } else if (*a1 < *a2) {
        return -1;
    } else {
        return 0;
    }
}