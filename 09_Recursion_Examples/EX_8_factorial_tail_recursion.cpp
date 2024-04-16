// s. trowbridge 2022
#include <iostream>
using namespace std;

// factorial(5)
//  factorial(4)
//    factorial(3)
//      factorial(2) return 2
//    factorial(3) return 2 * 3
//  factorial(4) return 6 * 4
// factorial(5) return 24 * 5
long long factorial(int n) {
    if(n==2) {
        return 2;
    }
    return factorial(n-1) * n;
}

// factorial(5) compute 5*1
//  factorial(4) compute 4*5
//    factorial(3) compute 3*20
//      factorial(2) return 2*60
//    factorial(3) return 120
//  factorial(4) return 120
// factorial(5) return 120
long long factorialTail(int n, long long p=1) { // p has a default argument value of 1
    if(n==2) {
        return p*n;
    }
    return factorialTail(n-1, p*n);     // computation passed onto the next function (tail recursion)
}

long long factorialTailOptimization(int n, long long p=1) {  // tail recursion optimization using goto
    start:            // label for the goto command
    if(n==2) {        // if n is 2,
        return p*n;   //    return product*n
    }
    p*=n;             // multiply current n by product
    --n;              // reduce n by 1
    goto start;       // jump back to start to repeat the next step
}

int main() {
    cout << endl;

    long n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << factorial(n) << "\n\n";

    cout << factorialTail(n) << "\n";   // 2nd argument not needed
    cout << factorialTail(n,1) << "\n\n";

    cout << factorialTailOptimization(n,1) << "\n";

    cout << endl;
    return 0;
}
