// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(int matrix[][4], int D1, int D2) {
    int num = 10;
    for(int i=0; i<D1; i++) {
        for(int j=0; j<D2; j++) {
            matrix[i][j] = num++;
        }
    }
}

void print(int matrix[][4], int D1, int D2) {
    for(int i=0; i<D1; i++) {
        for(int j=0; j<D2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    cout << endl;

    const int D1 = 3;
    const int D2 = 4;
    int matrix[D1][D2];

    init(matrix, D1, D2);
    print(matrix, D1, D2);

    cout << endl;
    return 0;
}
