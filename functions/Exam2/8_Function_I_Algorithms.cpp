// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

// Euclids gcd
// a) gcd(x,y)  = gcd(y, x%y)
// b) gcd(x, 0) = x
int gcd(int x, int y) {                     // assume x=36 and y=24:
    int temp;

    while(y != 0) {                         // true value   :   T               T               F 
        //cout << x << " " << y << endl;
        temp = y;                           // temp value   :   24              12                      
        y = x%y;                            // y value      :   36%24 == 12     24%12 == 0
        x = temp;                           // x value      :   24              12
    }
    //cout << x << " " << y << endl;
    return x;                               // return value :                                   return 12
}

int main() {
    cout << endl;

    cout << "gcd(10, 8)\n" << gcd(10, 8) << "\n\n";
    cout << "gcd(36, 24)\n" << gcd(36, 24) << "\n\n";
    cout << "gcd(240, 64)\n" << gcd(240, 64) << "\n\n";

    cout << endl;
    return 0;
}
