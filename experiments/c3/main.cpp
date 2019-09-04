#include <iostream>

using namespace std;

int main() {
    int a, j;
    cin >> a;
    j = 0;
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0) {
            j = i;
            break;
        }
    }
    if (j != 0){
        cout << j << endl;
    } else {
        cout << "It does not exist" << endl;
    }

    return 0;
}
