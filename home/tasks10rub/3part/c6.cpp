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
	for (int j = 1; j <= a; j++) {
		if (is_simple(j) == true) {
			cout << j << " ";
		}
	}
	cout << endl;

	return 0;
}