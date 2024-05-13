// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(int matrix[][5], int d1, int d2) {
    int num = 10;
    for(int i=0; i<d1; ++i) {             // d1xd2 two-dimensional array
        for(int j=0; j<d2; ++j) {
            matrix[i][j] = num++;         // store number then increment
        }
    }
}
void print(int matrix[][5], int d1, int d2 ) {
     for(int i=0; i<d1; ++i) {  
        for(int j=0; j<d2; ++j) {
            cout << matrix[i][j] << " "; 
        }
        cout << "\n";
    }   
}

int main() {
    cout << endl;

    const int D1 = 4;
    const int D2 = 5;

    int matrix[D1][D2];

    init(matrix, D1, D2);
    print(matrix, D1, D2);

    cout << endl;
    return 0;
}
