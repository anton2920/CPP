#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string addBinaryStrings(string a, string b) {
    string c;
    char carry = 0, res;
    int i, j;

    for (i = a.size() - 1, j = b.size() - 1; i >= 0 && j >= 0; i--, j--) {
        res = (a[i] - '0') ^ (b[j] - '0') ^ carry;
        carry = ((a[i] - '0') & (b[j] - '0')) | (((a[i] - '0') ^ (b[j] - '0')) & carry);
        c.push_back(res + '0');
    }

    if (i >= 0) {
        while (i >= 0) {
            res = (a[i] - '0') ^ carry;
            carry = (a[i] - '0') & carry;
            c.push_back(res + '0');
            --i;
        }
    } else if (j >= 0) {
        while (j >= 0) {
            res = (b[j] - '0') ^ carry;
            carry = (b[j] - '0') & carry;
            c.push_back(res + '0');
            --j;
        }
    }

    if (carry) {
        c.push_back(carry + '0');
    }

    std::reverse(c.begin(), c.end());

    return c;
}

int main() {

    cout << addBinaryStrings("1110010011100100101111011001000001000100000010111000100100011011111001001011000100010000011110010", "11111011110110110101011001000100000011110000011010000111111111100101101101100110111001010000010011110010111111011001010000011110110011101011111010010100010101110000010110011111110100100100101") << std::endl;
}