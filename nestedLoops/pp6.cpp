#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 9;

    for(int i=0; i<DIM; ++i) {          // print rows
        for(int j=0; j<DIM; ++j) {      
            if((i>=DIM/2) && (j==i || j==DIM-1-i)){                  // left diagnial
                cout << "X ";
            } else {
                cout << "0 ";
            }
        }
        cout << "\n";
    }

}