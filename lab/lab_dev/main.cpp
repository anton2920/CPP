#include <iostream>
#include "libs/libs.hpp"
#include "libs/marr.hpp"

int main() {

    /* Initializing variables */
    size_t nelem;
    int func, func2;

    /* Main part */
    for (;;) {
        if ((func = menu1()) == -1) {
            return 0;
        }

        if ((func2 = menu2()) == -1) {
            return 0;
        } else if (!func2) {
            continue;
        }

        nelem = getNumber();
        class marr array(nelem);

        if (!array.is_init()) {
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

        switch (func2) {
            case 1:
                array.readArr();
                break;
            case 2:
                array.randArr();
                break;
            case 3:
                array.fileArr();
                break;
            default:
                break;
        }

        class marr backup_arr(array.getNelem());
        backup_arr.copy_from(&array);

        switch (func) {
            case 1:
                task_14(&array);
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

        write_answer(&array, &backup_arr);

        if (!menu_continue()) {
            break;
        }
    }

    /* Returning value */
    return 0;
}