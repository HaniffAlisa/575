// s. trowbridge 2020
#include <iostream>
using namespace std;

// summation(5)
//  summation(4)
//    summation(3)
//      summation(2)
//       summation(1) return 1
//      summation(2) return 1 + 2
//    summation(3) return 3 + 3
//  summation(4) return 6 + 4
// summation(5) return 10 + 5
long summation(int n) {
    if(n==1) {                        // base case: when n is 1
        return 1;                     // 1: return 1 which is the first number we multiply by
    }
                                      // recursive task: when n is greater than 1
    return summation(n-1) + n;        // 1: recurse to reduce n by 1, add n on return
}

int main( ) {
    cout << endl;

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << summation(n) << endl;

    cout << endl;
    return 0;
}
