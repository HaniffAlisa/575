// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 5;

    for(int i=0; i<DIM; ++i) {          // print 5 rows
        for(int j=0; j<DIM; ++j) {      
            if(j==i) {                  // column == row (0 0, 1 1, 2 2, 3 3, 4 4)
                cout << "X ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << endl;

    for(int i=0; i<DIM; ++i) {          // print 5 rows
        for(int j=0; j<DIM; ++j) {      
            if(j==DIM-i-1) {            // 0 4, 1 3, 2 2, 3 1, 4 0
                cout << "X ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}