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

int count1(int x){
    int k = 0;
    int a;
    string s = tobin(x);
    for (int i = 0; i <= s.length() - 1; i++){
        if (s[i] == '1'){
            k++;
        }
    }
    return k;
}


int main(){
    string a, b;
    int i, j, k = 0;
    cin >> a;
    i = (a[0] - '0') + (a[1] - '0');
    j = (a[3] - '0') + (a[4] - '0');
    k = (a[2] - '0');
    if (i > 9){
        b = to_string(i);
        i = (b[0] - '0') + (b[1] - '0');
    }
    if (j > 9){
        b = to_string(i);
        j = (b[0] - '0') + (b[1] - '0');
    }
    if (((i == j) && (i == k) && (j == k)) || (((count1(i)) == count1(j)) && (count1(i) == count1(k)) && (count1(j) == count1(k)))){
        cout << "It's a lucky ticket" << endl;
    } else {
        cout << "It's not a lucky ticket" << endl;
    }
    return 0;
}