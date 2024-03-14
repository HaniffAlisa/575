// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n, sum=0;                   // initialize sum to 0
    cout << "Enter a value: ";
    cin >> n;

    for(int i=1; i<=n; ++i) {       // increment i from 1 to n inclusive, add each value of i to the sum
        if(i%2 == 0) { continue; }  // if i is even, restart the loop at the next i (do not sum even values)
        sum += i;
    }

    cout << "The summation of all ODD values from 1 to " << n << " inclusive is " << sum << endl;

    cout << endl;
    return 0;
}