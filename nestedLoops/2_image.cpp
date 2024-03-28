// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    cout << "3 row x 4 column image: \n\n";

    for(int i=0; i<3; ++i) {        // print three rows (0,1,2)
        for(int j=0; j<4; ++j) {    // print four columns (0,1,2,3)
            cout << "X ";
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}