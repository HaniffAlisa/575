// s. trowbridge 2020
#include <iostream>
using namespace std;

// Euclids GCD Algorithm
// 1) gcd(a, b) == gcd(b, a%b)
// 2) gcd(a, 0), a is the GCD

// gcd(20, 16)
//  gcd(16, 4)
//    gcd(4, 0) return 4
//   gcd(16, 4) return 4
// gcd(20, 16) return 4
int gcd(int a, int b) {
    cout << a << " " << b << endl;
    // base case
    if(b == 0)
        return a;
    // recursive task
    return gcd(b, a%b);
}

int main() {
    cout << endl;

    long a, b;
    cout << "Enter two positive integers: ";
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    cout << endl;
    return 0;
}
