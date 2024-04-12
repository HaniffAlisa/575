// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int gcd(int x, int y) {             // compute if x=6 and y=8

    int g, min = x;                 // g will store the largest common factor, min initialized to x
    if(y<x) min = y;                // find min of x and y (not required, but this will minimize the number of iterations)

    for(int i=min; i>=1; --i) {     // i values     :   6       5       4       3       2     1  
        if(x%i==0 && y%i==0) {      // true values  :                                   T                 
            g = i;                  // g value      :                                   2                                                       
            break;                  //                                                  B  (terminate loop early)
        }
    }
    return g;                       // return 2                  
}

int main() {
    cout << endl;

    cout << "GCD(6, 8) = " << gcd(6, 8) << endl;
    cout << "GCD(15, 17) = " << gcd(15, 17) << endl;
    cout << "GCD(10, 8) = " << gcd(10, 8) << endl;
    cout << "GCD(36, 24) = " << gcd(36, 24) << endl;
    cout << "GCD(240, 64) = " << gcd(240, 64) << endl;

    cout << endl;
    return 0;
}
