#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int k = 0;
    ifstream inputs ("input.txt", ios::in);
    inputs >> k;
    inputs.close();
    int i1, a = 0;
    int i = 1;
    while (a != k) {
        i++;
        a = 0;
        i1 = i;
        while (i1 != 1) {
            if(i1 % 3 == 0) {
                i1 = i1 / 3;
                a++;
            } else {
                i1--;
                a++;
            }
        }
    }
    ofstream outputs ("output.txt", ios::out);
    outputs << i;
    outputs.close();
    return 0;
}
