#include <iostream>
#include <gmpxx.h>

using namespace std;


/*int main() {
    mpz_t m, b, n, e, p1, p2;
    mpz_set_ui(b, 1);
    while (true){
        mpz_mul(n, b, b);
        cout << "Квадрат " << b << " равен" << n << endl;
        mpz_add_ui(b, b, 1);
    }


    return 0;
}*/

/*int main () {
    mpz_class a, b, c;
    b = "1";
    while (true) {
        cout << "Квадрат " << b << " равен " << b * b << endl;
        b = b + 1;
    }

    return 0;
}*/


int main() {
    mpz_class b, e, m, c;
    e = "158298905730304568481725337854541824";
    b = "304946812190047634073406055364323957";
    m = "395747264325761407432250021224938029";
    mpz_powm(c.get_mpz_t(), b.get_mpz_t(), e.get_mpz_t(), m.get_mpz_t());
    cout << c << endl;

    return 0;
}