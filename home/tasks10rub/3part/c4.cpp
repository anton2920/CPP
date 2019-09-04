#include <iostream>

using namespace std;

int main() {
	int a, j;
	cin >> a;
	j = 0;
	for (int i = 1; i <= a / 2; i++) {
		if (a % i == 0) {
			j++;
		}
	}
	j++;
	cout << j << endl;

	return 0;
}