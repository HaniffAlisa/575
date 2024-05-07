// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    const int D1 = 2;
    const int D2 = 3;

    int a[D1][D2] = { {1,2,3}, {4,5,6} };

    cout << a << "\n\n";                                   // print address of array (and first element)

    for(int i=0; i<D1; i++) {
        for(int j=0; j<D2; j++) {
            cout << a[i][j] << " " << &a[i][j] << "\n";    // print value and memory address
        }                                                  // note that this is contiguous
    }

    cout << endl;
    return 0;
}
