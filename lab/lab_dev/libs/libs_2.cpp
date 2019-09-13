#include "libs.hpp"

void readVec(std::vector<double> &array, std::size_t nelem) {

    /* Initializing variables */
    double tmp;

    /* I/O flow */
    for (size_t i = 0; i < nelem; ++i) {
        std::cout << "| Type " << i << ENDING(i) << " element: ";
        std::cin >> tmp;
        array.push_back(tmp);
    }

    /* Final output */
    prt_ln();
}

void randVec(std::vector<double> &array, std::size_t nelem) {

    /* Initializing variables */
    int leftBnd = 0, rightBnd = RAND_MAX;

    /* I/O flow */
    std::cout << "| Type left bound: ";
    std::cin >> leftBnd;

    do {
        std::cout << "| Type right bound: ";
        std::cin >> rightBnd;
    } while (rightBnd < leftBnd);

    /* Main part */
    for (size_t i = 0; i < nelem; ++i) {
        array.push_back((std::rand() % (rightBnd - leftBnd + 1)) + leftBnd);
    }

    /* Final output */
    prt_ln();
}

bool fileVec(std::vector<double> &array, std::size_t nelem) {

    /* Initializing variables */
    std::ifstream inputs;
    std::string filename;
    int func;
    double tmp;

    /* I/O flow */
    std::cout << "| Type filename: ";
    std::cin >> filename;

    /* Main part */
    for (;;) {
        inputs.open(filename, std::ios_base::in);
        if (inputs.is_open()) {
            for (size_t i = 0; i < nelem; ++i) {
                inputs >> tmp;
                array.push_back(tmp);
                if (inputs.eof()) {
                    inputs.close();
                    return false;
                }
            }
            break;
        } else {
            func = promtMsg("| Error! File can't be opened!\n");
            switch (func) {
                case 1:
                    exit(2);
                case 2:
                    continue;
                case 3:
                    return false;
                default:
                    break;
            }
        }
    }
    inputs.close();

    /* Final output */
    prt_ln();
    std::cout.flush();

    /* Returning value */
    return true;
}

void task_14(std::vector<double> &array) {

    /* Initializing variables */
    double *beg = nullptr, *end = nullptr;
    std::size_t best_size = 0;
    std::size_t bbeg = 0, bend = 0;
    bool flag = false;
    std::size_t j = 0;

    /* Main part */
    for (std::size_t i = 0; i < array.size(); ++i) {
        if (array[i] > 0 && !flag) {
            beg = &array[i];
            flag = true;
        } else if ((array[i] < 0 && flag) || i == array.size() - 1) {
            end = &array[i];
            if (end - beg > best_size) {
                best_size = end - beg;
                bbeg = beg - array.data();
                bend = (i == array.size() - 1) ? (end - array.data()) + 1 : end - array.data();
            }
            flag = false;
        }
    }
    if (beg == nullptr || end == nullptr) {
        return;
    }

    array.erase(array.begin() + bbeg, array.begin() + bend);
}

void task_19(std::vector<double> &array) {

    /* Initializing variables */
    double min = array[0], min_pos = 0;
    auto i = array.begin();
    std::size_t count = 0;
    double mean = 0;

    /* Main part */
    for (std::size_t j = 0; i < array.end(); ++i, ++j) {
        if (array[j] < min) {
            min = array[j];
            min_pos = j;
        }
        if (!(static_cast<int>(array[j]) & 1)) { /* number is even */
            mean += array[j];
            ++count;
        }
    }

    array.insert(array.begin() + min_pos + 1, mean / count);
}

void task_4(std::vector<double> &array, int (*cmp)(const void *, const void *)) {

    /* Main part */
    std::qsort((void *) array.data(), array.size(), sizeof(double), cmp);
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

void task_9(std::vector<double> &array) {

    /* Initializing variables */
    double max_max = 0;
    size_t j = 0;

    /* Main part */
    for (double i : array) {
        if (i - std::floor(i) > max_max) {
            max_max = i - std::floor(i);
        }
    }

    for (double &i : array) {
        if (i - std::floor(i) == max_max) {
            i = 0;
        }
    }

}

bool write_to_file(std::vector<double> &array, const char *name) {

    /* Initializing variables */
    std::ofstream outputs(name);
    int func;

    /* Main part */
    for (;;) {
        if (outputs.is_open()) {
            for (double i : array) {
                outputs << i << " ";
            }
            break;
        } else {
            func = promtMsg("| Error! File can't be opened!\n");
            switch (func) {
                case 1:
                    exit(2);
                case 2:
                    continue;
                case 3:
                    return false;
                default:
                    break;
            }
        }
    }

    /* Returning value */
    return true;
}

void write_answer(std::vector<double> &array, std::vector<double> &back) {

    /* Initializing variables */
    size_t i;

    /* I/O flow */
    std::cout << "| Source array: ";
    for (i = 0; i < back.size(); ++i) {
        std::cout << back[i] << " ";
    }
    std::cout << "\n| Answer:       ";
    for (i = 0; i < array.size(); ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    /* Main part */
    while (std::cin.get() != '\n')
        ;

    /* Final output */
    prt_ln();
}
