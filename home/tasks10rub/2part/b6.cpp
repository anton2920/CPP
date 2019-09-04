#include <iostream>
#include <string>

using namespace std;

string tobin(int x) {
    string s;
    string s1;
    do {
        s += to_string(x % 2);
        x = x / 2;
    } while (x > 0);
    for (int i = s.length() - 1; i >= 0; --i){
        s1 += s[i];
    }
    return s1;
}

string rtobin(int x) {
    string s;
    string s1;
    do {
        s += to_string(x % 2);
        x = x / 2;
    } while (x > 0);
    return s;
}

int main() {
	int a;
	cin >> a;
	if (tobin(a) == rtobin(a)) {
		cout << "It's a palindome" << endl;
	} else {
		cout << "It's not a palindrome" << endl;
	}
	return 0;
}
