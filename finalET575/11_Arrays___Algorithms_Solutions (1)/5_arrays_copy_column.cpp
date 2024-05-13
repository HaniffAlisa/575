// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int a[][5], int s1, int s2) {
    for(int r=0; r<s1; ++r) {
        for(int c=0; c<s2; ++c) {
            a[r][c] = rand()%10;
        }
    }
}

void print(int a[][5], int s1, int s2) {
    for(int r=0; r<s1; ++r) {
        for(int c=0; c<s2; ++c) {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }
}

void print(int a[], int s) {
    for(int i=0; i<s; ++i) { cout << a[i] << " ";}
    cout << endl;
}

void copyCol(int a[][5], int b[], int s1, int s2, int column) {
    for(int r=0; r<s1; ++r) {
        b[r] = a[r][column];
    }
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int S1 = 3;
    const int S2 = 5;  
    int a[S1][S2];
    int b[S1];

    init(a, S1, S2);
    print(a, S1, S2);

    int col;
    cout << "\nSelect a column: ";
    cin >> col;

    copyCol(a, b, S1, S2, col);
    print(b, S1);

    cout << endl;
    return 0;
}
