#include <iostream>
#include <cmath>
#include <boost/multiprecision/gmp.hpp>


using namespace std;
using boost::multiprecision::gmp_int;


unsigned long long int func(long long int x){
    return ((pow(2, x-1)) * ((pow(2, x)) - 1));
}

bool simple_test(long long int z) {
    unsigned long long int a = ((pow(2, z)) - 1);
    int flag = 0;
    if (int(((pow(2, z)) - 1)) % 2 == 0) {
        return false;
    }
    for (unsigned long long int i = 3; i <= ceil(sqrt(a)); i+=2 ) {
        if (int(((pow(2, z)) - 1)) % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        return true;
    } else {
        return false;
    }
}


int main() {
    unsigned long long int a;
    unsigned long long int n = 1;
    while (true) {
        n++;
        if (simple_test(n) == true) {
            a = func(n);
            cout << a << endl;
        }
    }
    return 0;
}

/*bool simple_test(mpz_t z) {
    mpz_t a;
    mpz_perfect_power_p
}*/
