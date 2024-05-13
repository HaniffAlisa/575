// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int a[][5], int s1, int s2) {
    for(int r=0; r<s1; ++r) {
        for(int c=0; c<s2; ++c) {
            a[r][c] = rand()%90+10;
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
int sumRow(int a[][5], int size, int r) {
    int sum = 0;
    for(int c=0; c<size; ++c) {             // iterate through all columns in the row
        sum += a[r][c];                     // sum all column values in row r
    }
    return sum;
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int S1 = 5;
    const int S2 = 5;    
    int a[S1][S2];

    init(a, S1, S2);
    print(a, S1, S2);

    int row;
    cout << "Select a row: ";
    cin >> row;

    int sum = sumRow(a, S2, row);

    cout << "Sum of row " << row << " = " << sum << endl;

    cout << endl;
    return 0;
}
