#include <iostream>
#include <gmpxx.h>
#include <cmath>

using namespace std;


bool simple_test(long z) {
    mpz_class a;
    mpz_ui_pow_ui (a.get_mpz_t(), 2, z);
    a--;
    mpz_class b;

    bool flag = false;
    for (mpz_class i = 3; i <= ; i++) {

    }
}


int main(void) {
    cout << "Hello world!!! We're starting!" << endl;
    mpz_class a;
    long n;

    return 0;
}