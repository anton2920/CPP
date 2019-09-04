#include <iostream>
#include "libs/libs.hpp"

int main() {

    /* Initializing variables */
    int *array;
    size_t nelem;
    int func;
    bool (*properRead)(int *, size_t);

    /* Main part */
    for (;;) {
        func = menu1();
        properRead = menu2();

        nelem = getNelem();
        array = getArray(nelem);
        if (array == nullptr) {
            func = promtMsg("| Error! Array can't be allocated!\n");
            switch (func) {
                case 1:
                    std::exit(1);
                case 2:
                    continue;
                case 3:
                    return 1;
                default:
                    break;
            }
        }

        (*properRead)(array, nelem);
        switch (func) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            default:
                break;
        }
        break;
    }

    /* Returning value */
    return 0;
}