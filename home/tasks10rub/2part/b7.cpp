#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    float d, a, b, c, x1, x2;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if (d > 0) {
        x1 = ((b * (-1)) + pow(d, 0.5)) / (2 * a); 
        x2 = ((b * (-1)) - pow(d, 0.5)) / (2 * a); 
        cout << x1 << ' ' << x2 << endl;
    } else if (d == 0) {
       x1 = ((b * (-1)) + pow(d, 0.5)) / (2 * a);  
       cout << x1 << endl;
    } else if (d < 0) {
        cout << "There's no real roots" << endl;
    }
    return 0;
}
