#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputs ("input.txt", ios_base::in);
    string b, c;
    char a[10000];
    inputs >> b;
    long maxi = 0;
    int c1;
    int d = stoi(b);
    for (int i = 0; i < b.length(); i++) {
        for (int i1 = 0; i1 < b.length(); i1++) {
            a[i1] = b[i1];
        }
        for (char j = '1'; j <= '9'; j++) {
            a[i] = j;
            c = "";
            for (int k = 0; k < b.length(); k++) {
                c += a[k];
            }
            c1 = stoi(c);
            if ((c1 % 3 == 0) && (c1 != d) && (c1 > maxi)) {
                maxi = c1;
            }
        }
    }
    ofstream outputs ("output.txt", ios_base::out);
    outputs << maxi;
    outputs.close();
    return 0;
}