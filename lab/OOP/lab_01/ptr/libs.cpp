#include "libs.hpp"

void readPtr(std::unique_ptr<int[]> &array, std::size_t nelem) {

    /* I/O flow */
    for (std::size_t i = 0; i < nelem; ++i) {
        std::cout << "| Type " << i << ENDING(i) << " element: ";
        std::cin >> array[i];
    }

    /* Final output */
    prt_ln();
}

void randPtr(std::unique_ptr<int[]> &array, std::size_t nelem) {

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
    for (std::size_t i = 0; i < nelem; ++i) {
        array[i] = (std::rand() % (rightBnd - leftBnd + 1)) + leftBnd;
    }

    /* Final output */
    prt_ln();
}

bool filePtr(std::unique_ptr<int[]> &array, std::size_t nelem) {

    /* Initializing variables */
    std::ifstream inputs;
    std::string filename;
    int func;

    /* I/O flow */
    std::cout << "| Type filename: ";
    std::cin >> filename;

    /* Main part */
    for (;;) {
        inputs.open(filename, std::ios_base::in);
        if (inputs.is_open()) {
            for (std::size_t i = 0; i < nelem; ++i) {
                inputs >> array[i];
                if (inputs.eof()) {
                    inputs.close();
                    prt_ln();
                    std::cout.flush();
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

bool write_to_file(std::unique_ptr<int[]> &array, std::size_t nelem, const char *name) {

    /* Initializing variables */
    std::ofstream outputs(name);
    int func;

    /* Main part */
    for (;;) {
        if (outputs.is_open()) {
            for (std::size_t i = 0; i < nelem; ++i) {
                outputs << array[i] << " ";
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

void write_ptr(const char *str, std::unique_ptr<int[]> &array, std::size_t nelem) {

    /* Initializing variables */
    std::size_t i;

    /* I/O flow */
        std::cout << str;
    for (i = 0; i < nelem; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void write_answer(bool isAny) {

    /* Final output */
    std::cout << "|\n| There " << (isAny ? "are " : "aren\'t ") << "an identical elements" << std::endl;
}

bool special_task(std::unique_ptr<int[]> &array, std::size_t nelem) {

    /* Initializing variables */
    bool isEqual = false;
    int max = array[0];

    /* Main part */
    for (std::size_t i = 0; i < nelem && !isEqual; ++i) {
        for (std::size_t j = i + 1; j < nelem && !isEqual; ++j) {
            if (array[i] == array[j]) {
                isEqual = true;
            }
        }
    }

    for (std::size_t i = 0; i < nelem; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    for (std::size_t i = 0; i < nelem; ++i) {
        if (!(array[i] & 1)) {
            array[i] *= max;
        }
    }

    /* Returning value */
    return isEqual;
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