#include <iostream>
#include <string>

using namespace std;

int main(){
	char a[4] = "";
	cin.getline(a, 4);
	for (int i = 2; i >= 0; i--){
		cout << a[i];
	}
	cout << endl;
	return 0;
}
