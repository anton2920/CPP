#ifndef LAB_DEV_LIBS_HPP
#define LAB_DEV_LIBS_HPP

/* Header inclusion */
#include <iostream>

/* Macro definitions */
#define iswordend(x) ((x) == ' ' || (x) == ',' || (x) == '.' ||     \
    (x) == '?' || (x) == '!' || (x) == '\0')

/* Type definitions */
struct word {
    char *begin;
    std::size_t length;

    word getNextWord() {

	    /* Initializing variables */
	    std::size_t i;
	    word c_w = *this;

	    /* Main part */
	    for ( ; !isalpha(*c_w.begin); ++c_w.begin) {
	        if (*c_w.begin == '\0') {
	            c_w.begin = nullptr;
	            c_w.length = 0;
	            return c_w;
	        }
	    }

	    for (i = 0; !iswordend(c_w.begin[i]); ++i)
	        ;

	    c_w.length = i;

	    /* Returning value */
	    return c_w;
	}
};

/* Functions' declarations */
int menu();
void task1();
void task2();

#endif