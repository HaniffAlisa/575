// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(int a[][4], int s1, int s2) {
    int num = 10;
    for(int r=0; r<s1; r++) {
        for(int c=0; c<s2; c++) {
            a[r][c] = num++;
        }
    }
}
void print(int a[][4], int s1, int s2) {
    for(int r=0; r<s1; r++) {
        for(int c=0; c<s2; c++) {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }
}
void printRow(int a[][4], int size, int r) {
    for(int c=0; c<size; c++) {
        cout << a[r][c] << " ";
    }
}
void printCol(int a[][4], int size, int c) {
    for(int r=0; r<size; r++) {
        cout << a[r][c] << " ";
    }
}
void printBackDiag(int a[][4], int s1) {
    for(int i=0; i<s1; ++i) {
        cout << a[i][i] << " ";
    }
}
void printForwardDiag(int a[][4], int s1, int s2) {
    for(int i=0, j=s2-1; i<s1 && j>=0; i++, j--) { 
        cout << a[i][j] << " ";
    }
}

int main() {
    cout << endl;

    const int S1 = 4;
    const int S2 = 4;
    int a[S1][S2];

    init(a, S1, S2);
    print(a, S1, S2);

    cout << "\n2nd Row:\n";
    printRow(a, S2, 1);

    cout << "\n\n3rd Column:\n";
    printCol(a, S1, 2);

    cout << "\n\nBack Diag\n";
    printBackDiag(a, S1);

    cout << "\n\nForward Diag\n";
    printForwardDiag(a, S1, S2);

    cout << endl;
    return 0;
}
