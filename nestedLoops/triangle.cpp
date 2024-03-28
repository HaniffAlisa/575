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

    return 0;
}