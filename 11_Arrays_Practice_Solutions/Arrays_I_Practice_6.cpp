// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int D1 = 4;
    const int D2 = 5;

    int matrix[D1][D2];

    int num = 10;
    for(int i=0; i<D1; ++i) {             // d1xd2 two-dimensional array
        for(int j=0; j<D2; ++j) {
            matrix[i][j] = num++;         // store number then increment
        }
    }

    for(int i=0; i<D1; ++i) {             // d1xd2 two-dimensional array
        for(int j=0; j<D2; ++j) {
            cout << matrix[i][j] << " ";  // print each element
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}
