#include <iostream>
#include "libs.hpp"
#include "marr.hpp"

int main() {

    /* Initializing variables */
    std::size_t nelem;
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
        marr array(nelem);

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

        marr backup_arr(array.getNelem());
        backup_arr.copy_from(&array);

        switch (func) {
            case 1:
                task_14(&array);
                break;
            case 2:
                task_19(&array);
                break;
            case 3:
                array.rearrange(task_4_cmp);
                break;
            case 4:
                task_9(&array);
                break;
            default:
                break;
        }

        write_answer(&array, &backup_arr);
        array.write_to_file("output.txt");

        if (!menu_continue()) {
            break;
        }
    }

    /* Returning value */
    return 0;
}