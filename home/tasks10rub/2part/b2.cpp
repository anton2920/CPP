#include <iostream>

using namespace std;

int main(){
	float a, b, c = 0;
	cin >> a >> b >> c;
	if ((a >= b) && (a >= c)){
		cout << a << endl;
	} else if ((b >= a) && (b >= c)){
		cout << b << endl;
	} else if ((c >= a) && (c >= b)){
		cout << c << endl;
	}
	return 0;
}
