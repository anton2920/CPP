#include <iostream>
#include "libs.hpp"

int main() {

    /* Initializing variables */
    std::size_t nelem;
    int func2;

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
        // std::qsort((void *) array.get(), nelem, sizeof(double), num_cmp);
        std::unique_ptr<int[]> back_arr(new int [nelem]);
        ptrCpy(back_arr, array, nelem);

        write_answer(array, back_arr, nelem, special_task(array, nelem));
        write_to_file(array, nelem, "output.txt");

        if (!menu_continue()) {
            break;
        }
    }

    /* Returning value */
    return 0;
}