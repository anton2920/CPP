#include <iostream>
#include "libs/libs.hpp"
#include "libs/marr.hpp"

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
        std::unique_ptr<marr[]> array(new marr [nelem]);

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

        marr back_array(nelem);


        special_task(array);

        write_answer(array, );
        write_to_file(, "output.txt");

        if (!menu_continue()) {
            break;
        }
    }

    /* Returning value */
    return 0;
}