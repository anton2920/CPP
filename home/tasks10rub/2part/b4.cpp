#include <iostream>
#include <string>

using namespace std;

int main(){
	string a1, a2;
	cin >> a1;
	for (int i = 3; i >= 0; i--){
		a2 += a1[i];
	}
	if (a2 == a1){
		cout << "It's a palindrome" << endl;
	} else {
		cout << "It's not a palindrome" << endl;
	}
	return 0;
}
