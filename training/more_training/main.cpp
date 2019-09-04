#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

bool is_prime(int x) {
    int a;
    bool f;
    f = true;
    if ((x % 2 == 0) || (x == 1)) {
        return false;
    }
    for (int i = 3; i <= ceil(sqrt(x)); i += 2){
        if (x % i == 0) {
            f = false;
            break;
        }
    }
    if (f == true) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a[10][10];
    for (int i = 0; i <= 10; i++){
        for (int j = 0; j <= 10; j++){
            a[i][j] = rand() % 100;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    for (int i1 = 0; i1 <= 10; i1++){
        for (int j1 = 0; j1 <= 10; j1++){
            if (is_prime(a[i1][j1]) == true){
                cout << a[i1][j1] << " is prime" << endl;
            }
        }
    }
    return 0;
}