// s. trowbridge 2020
#include <iostream>
using namespace std;

// power(2, 4)
//  power(2, 3)
//    power(2, 2)
//      power(2, 1) return 2
//    power(2, 2) return 2 * 2
//  power(2, 3) return 4 * 2
// power(2, 4) return 8 * 2
int power(int n, int e) {
    if(e==1) {                  // base case: when exponent is 1
        return n;               // return n (the first n to be multiplied
    }
                                // recursive task
    return power(n, e-1) * n;   // recurse to decrement the exponent, multiply return value by n
}

int main() {
    cout << endl;

    int n, e;
    cout << "Enter a positive integer and an exponent: ";
    cin >> n >> e;

    cout << power(n, e) << endl;

    cout << endl;
    return 0;
}
