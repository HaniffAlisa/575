// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    const int D1 = 2;                       // use a constant for dimension size
    const int D2 = 3;                       // use a constant for dimension size

    int a[D1][D2] = { {1,2,3}, {4,5,6} };   // initialize a d1xd2 two-dimensional array

    for(int i=0; i<D1; i++) {               // iterate through a d1xd2 array
        for(int j=0; j<D2; j++) {
            cout << a[i][j] << " ";         // print array values
        }
        cout << "\n";                       // print the array as a 2x2 matrix
    }

    cout << endl;
    return 0;
}
