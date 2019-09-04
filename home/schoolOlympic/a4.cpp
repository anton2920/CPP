#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string tobin(long x) {
    string c, d;
    c = "";
    d = "";
    int temp;
    do {
        c += to_string(x % 2);
        x = x / 2;
    } while (x != 1);
    c += "1";
    for (long i = c.length() - 1; i >= 0; i-- ) {
        temp = c[i] - '0';
        d += to_string(temp);
    }
    return d;
}

int main() {
    long a;
    ifstream inputs ("input.txt", ios_base::in);
    inputs >> a;
    inputs.close();
    string b;
    b = tobin(a);
    long k = 0;
    long k1 = 0;
    for (long i = 0; i< b.length(); i++) {
        if ((b[i] - '0') == 1) {
            k++;
        } else {
            k = 0;
        }
        if (k > k1) {
            k1 = k;
        }
    }
    ofstream outputs ("output.txt", ios_base::out);
    if (k1 > k) {
        outputs << k1;
    } else {
        outputs << k;
    }
    outputs.close();
    return 0;
}