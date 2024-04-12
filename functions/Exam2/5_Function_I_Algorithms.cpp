// (c) s. trowbridge 2024
#include <iostream>
using namespace std;

// fibonacci sequence
//  xth value           :       0   1   2   3   4   5   6   7   8   9   10
//  sequence value      :       0   1   1   2   3   5   8   13  21  34  55    (value of x == value of x-1 + value of x-2)  

int fibonacci(int x) {              // if x==4
    int c=0, n=1, t;                // 
    for(int i=1; i<=x; ++i) {       // i values     :   1           2           3           4           5           6           7           8           9           10
        t = c+n;                    // t values     :   0+1         1+1         1+2         2+3         3+5         5+8         8+13        13+21       21+34       34+55
        c = n;                      // c values     :   1           1           2           3           5           8           13          21          34          55
        n = t;                      // n values     :   1           2           3           5           8           13          21          34          55          89
    }
    return c;                       // return value of c (the xth sequence value)
}

int main() {
    cout << endl;

    cout << "fib(1): " << fibonacci(1) << endl;     // 1
    cout << "fib(2): " << fibonacci(2) << endl;     // 1
    cout << "fib(3): " << fibonacci(3) << endl;     // 2
    cout << "fib(4): " << fibonacci(4) << endl;     // 3
    cout << "fib(5): " << fibonacci(5) << endl;     // 5
    cout << "fib(6): " << fibonacci(6) << endl;     // 8
    cout << "fib(7): " << fibonacci(7) << endl;     // 13
    cout << "fib(8): " << fibonacci(8) << endl;     // 21
    cout << "fib(9): " << fibonacci(9) << endl;     // 34    
    cout << "fib(10): " << fibonacci(10) << endl;   // 55       

    cout << endl;
    return 0;
}
