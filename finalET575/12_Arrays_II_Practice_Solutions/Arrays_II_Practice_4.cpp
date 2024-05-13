// S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int matrix[][4], int D1, int D2) {
    for(int i=0; i<D1; i++) {
        for(int j=0; j<D2; j++) {
            matrix[i][j] = rand()%90+10;
        }
    }
}
void print(int matrix[][4], int D1, int D2) {
    for(int i=0; i<D1; i++) {
        for(int j=0; j<D2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
double average(int matrix[][4], int D1, int D2) {
    double sum = 0;
    for(int i=0; i<D1; i++) {
        for(int j=0; j<D2; j++) {
            sum+=matrix[i][j];
        }
    }
    return sum/(D1*D2);
}

int main() {
    cout << endl;

    srand(time(NULL));
    const int D1 = 3;
    const int D2 = 4;
    int matrix[D1][D2];

    init(matrix, D1, D2);
    print(matrix, D1, D2);

    cout << "\nAverage = " << average(matrix, D1, D2) << endl;

    cout << endl;
    return 0;
}
