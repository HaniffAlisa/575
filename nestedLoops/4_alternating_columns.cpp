// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 5;

    for(int i=0; i<DIM; ++i) {          // print 5 rows
        for(int j=0; j<DIM; ++j) {      // print 5 columns
            if(j%2 == 0) {              // if column is even print X
                cout << "X ";
            } else {                    // otherwise print 0
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}