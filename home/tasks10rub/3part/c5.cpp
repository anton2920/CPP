#include <iostream>
#include <cmath>

using namespace std;

bool is_simple(int x) {
	int i;
	bool f;
	f = true;
	if (((x % 2 == 0) and (x != 2)) or (x == 1)){
		f = false;
	} else {
		for (int i = 3; i <= ceil(sqrt(x)); i += 2) {
			if (x % i == 0){
				f = false;
			}
		}
	}
	return f;
}

int main() {
	int a;
	cin >> a;
	if (is_simple(a) == true) {
		cout << "It is a prime number" << endl;
	} else {
		cout << "It is not a prime number" << endl;
	}

	return 0;
}