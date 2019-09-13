#include <iostream>
#include "libs.hpp"

int main() {

    /* Initializing variables */
    std::size_t nelem;
    int func, func2;

    /* Main part */
    for (;;) {
        if ((func = menu1()) == -1) {
            return 0;
        }

        if ((func2 = menu2()) == -1 ) {
            return 0;
        } else if (!func2) {
            continue;
        }

        nelem = getNumber();
        std::vector<double> array;

        switch (func2) {
            case 1:
                readVec(array, nelem);
                break;
            case 2:
                randVec(array, nelem);
                break;
            case 3:
                fileVec(array, nelem);
                break;
            default:
                break;
        }

        std::vector<double> backup_arr(array);

        switch (func) {
            case 1:
                task_14(array);
                break;
            case 2:
                task_19(array);
                break;
            case 3:
                task_4(array, task_4_cmp);
                break;
            case 4:
                task_9(array);
                break;
            default:
                break;
        }

        write_answer(array, backup_arr);
        write_to_file(array, "output.txt");

        if (!menu_continue()) {
            break;
        }
    }

    /* Returning value */
    return 0;
}