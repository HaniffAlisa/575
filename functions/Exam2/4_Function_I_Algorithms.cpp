// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

// multiply all values from 1 to n inclusive
int factorial(int n) {
    int p = 1;                      // p == 1
    for(int i=1; i<=n; ++i) {       // i values (if n == 3)     :   1           2           3
        p *= i;                     // p values (p = p * i)     :   p = 1*1     p = 1*2     p = 2*3
    }
    return p;
}

// sum all values from 1 to n inclusive, a similar algorithm
int summation(int n) {
    int p = 0;                      // p == 0
    for(int i=1; i<=n; ++i) {       // i values (if n == 3)     :   1           2           3
        p += i;                     // p values (p = p + i)     :   p = 0+1     p = 1+2     p = 3+3 
    }
    return p;
}

int main() {
    cout << endl;

    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    cout << "n! = " << factorial(n) << endl;

    cout << "Summation of n = " << summation(n) << endl;    

    cout << endl;
    return 0;
}
