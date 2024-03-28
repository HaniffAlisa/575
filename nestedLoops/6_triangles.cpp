// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 5;

    for(int i=0; i<DIM; ++i) {          // print 5 rows
        for(int j=0; j<=i; ++j) {       // print 1, then 2, then 3, then 4, then 5 columns (0, 0 1, 0 1 2, 0 1 2 3, 0 1 2 3 4)
            cout << "X ";
        }
        cout << "\n";
    }

    cout << endl;

    for(int i=0; i<DIM; ++i) {          // print 5 rows
        for(int j=i; j<DIM; ++j) {      // print 5, then 4, then 3, then 2, then 1 columns (0 1 2 3 4, 0 1 2 3, 0 1 2, 0 1, 0)     
            cout << "X ";
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}