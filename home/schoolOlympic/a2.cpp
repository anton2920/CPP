#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream inputs ("input.txt", ios::in);
	long n;
	inputs >> n;
	long a[100000];
	for (int i = 0; i < n; i++){
		inputs >> a[i];
	}
	inputs.close();
	long min = 40001;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}
			if ((min > a[i] * a[j]) && ((a[i] * a[j])) % 2 != 0) {
				min = a[i] * a[j];
			}
		}
	}
	ofstream outputs ("output.txt", ios::out);
	if (min == 40001) {
		outputs << "нет";
	} else {
		outputs << min;
	}
	outputs.close();
	return 0;
}