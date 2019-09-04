#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputs ("input.txt", ios_base::in);
    long a, b;
    inputs >> a >> b;
    inputs.close();
    long c = a + b;
    int k = 0;
    string d = to_string(c);
    for (int i = 1; i < d.length(); i++) {
        if (d[i - 1] == d[i]) {
            k = 1;
            break;
        }
    }
    ofstream outputs ("output.txt", ios_base::out);
    if (k == 0){
        outputs << "нет";
    } else {
        outputs << "есть";
    }
    outputs.close();
    return 0;
}