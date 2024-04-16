// s. trowbridge 2022
#include <iostream>
using namespace std;

// numDigits(5432)
//  numDigits(543)
//    numDigits(54)
//      numDigits(5) return 1
//    numDigits(54) return 1 + 1
//  numDigits(543) return 2 + 1
// numDigits(5432) return 3 + 1
int numDigits(long n) {
    if(n<10) {
        return 1;
    }
    return numDigits(n/10) + 1;
}

// numDigits(5432) 0+1
//  numDigits(543) 1+1
//    numDigits(54) 2+1
//      numDigits(5) return 3+1
//    numDigits(54) return 4
//  numDigits(543) return 4
// numDigits(5432) return 4
int numDigitsTail(long n, int d=0) {    // d has a default argument value of 0
    if(n<10) {
        return d+1;
    }
    return numDigitsTail(n/10, d+1);
}

int numDigitsTailOptimization(long n, int d=0) { // tail recursion optimization using goto
    start:              // label for the goto command
    if(n<10) {          // if only one digit,
        return d+1;     //    return the number of digits
    }
    n/=10;              // remove least significant digit
    d+=1;               // increment digit counter
    goto start;         // jump back to start to repeat the next step
}

int main( ) {
    cout << endl;

    long n = 3654562;
    cout << numDigits(n) << "\n";

    cout << numDigitsTail(n) << "\n";     // 2nd argument not needed
    cout << numDigitsTail(n, 0) << "\n";

    cout << numDigitsTailOptimization(n, 0) << "\n";

    cout << endl;
    return 0;
}
