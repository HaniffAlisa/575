// functions_hw1 - S. Trowbridge

#include <iostream>
using namespace std;

void mult_table(int n);

int main( ) {
    cout << endl;

    int n;
    cout << "Enter an integer: ";
    cin >> n;

    mult_table(n);

    cout << endl;
    return 0;
}

void mult_table(int n) {                                    
    for(int i=1; i<=n; i++) {                                   // iterate from 1 to n inclusive, multiplying all values of i by n
        cout << i << " * " << n << " = " << (i*n) << endl;      // print the result of the current i*n
    }
}
