// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

void printFactors(int n) {              //  if n==6
    for(int i=1; i<=n; ++i) {           //  i values            :   1   2   3   4   5   6
        if(n%i==0) {                    //  true value          :   T   T   T           T
            cout << i << " ";           //  output value        :   1   2   3           6 
        }
    }
}

int main() {
    cout << endl;

    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    printFactors(n);

    cout << endl;
    return 0;
}
