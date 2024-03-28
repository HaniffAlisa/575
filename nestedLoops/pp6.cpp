#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 9;

    for(int i=0; i<DIM; ++i) {          // print rows
        for(int j=0; j<DIM; ++j) {      
            if(j>2||i>2) && (j==DIM -1-i) {                  // left diagnial
                cout << "X ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }

}