#include <iostream>
#include "libs.hpp"

int main() {

    /* Initializing variables */
    std::size_t nelem;
    int func2;
    bool res;

    /* Main part */
    for (;;) {
        if ((func2 = menu2()) == -1 ) {
            return 0;
        } else if (!func2) {
            continue;
        }

        nelem = getNumber();
        std::unique_ptr<int[]> array(new int [nelem]);

        switch (func2) {
            case 1:
                readPtr(array, nelem);
                break;
            case 2:
                randPtr(array, nelem);
                break;
            case 3:
                filePtr(array, nelem);
                break;
            default:
                break;
        }

        write_ptr("| Source array:\t", array, nelem);
        res = special_task(array, nelem);
        write_ptr("| Answer:\t", array, nelem);
        write_answer(res);
        write_to_file(array, nelem, "output.txt");

        while (std::cin.get() != '\n')
            ;
        prt_ln();

        if (!menu_continue()) {
            break;
        }
    }

    /* Returning value */
    return 0;
}