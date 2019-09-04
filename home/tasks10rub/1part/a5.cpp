#include <iostream>
#include <string>

using namespace std;

string tobin(int x){
    string s;
    string s1;
    do{
        s += to_string(x % 2);
        x = x / 2;
    } while (x > 0);
    for (int i = s.length() - 1; i >= 0; --i){
        s1 += s[i];
    }
    return s1;
}

int main(){
    int k = 0;
    int a;
    cin >> a;
    string s = tobin(a);
    for (int i = 0; i <= s.length() - 1; i++){
        if (s[i] == '1'){
            k++;
        }
    }
    cout << k << endl;
    return 0;
}
