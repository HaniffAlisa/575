// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    cout << "I   J" << endl << endl;

    // for every i, the inner loop iterates j times
    // the total number of iterations is i*j
    for(int i=1; i<=4; ++i) {
        for(int j=1; j<=4; ++j) {               // inner loop on j
            cout << i << "   " << j << endl;
        }
        cout << "\n";                           // print a blank line at end of inner loop
    }

    cout << endl;
    return 0;
}
