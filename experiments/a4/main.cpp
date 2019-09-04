#include <iostream>
#include <string>

using namespace std;

int main(){
    char a[4] = "";
    cin.getline(a, 3);
    for (int i = 3; i <= 1; i--){
        cout << a[i];
    }
    cout << endl;
    return 0;
}
