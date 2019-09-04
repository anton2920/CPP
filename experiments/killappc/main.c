#include <stdio.h>
#include <limits.h>


int main() {
    int a = INT_MIN;
    int b = -1;
    int c = a / b;
    printf ("%d", c);
    return 0;
}
