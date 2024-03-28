// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    cout << "\nFactors of all numbers from 1 to " << n << "\n\n";
    
    for(int i=1; i<=n; ++i) {           // iterate from 1 to n inclusive
        cout << i << " : ";
        for(int j=1; j<=i; ++j) {       // iterate from 1 to i inclusive
            if(i%j == 0) {              // if j is a factor of i, print j
                cout << j << " ";
            }
        }
        cout << endl;                   // jump to next line to print all factors of next i
    }

    cout << endl;
    return 0;
}