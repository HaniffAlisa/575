// S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int a[][5], int rows, int cols) {
    int num = 10;
    for(int i=0; i<rows; ++i) {             
        for(int j=0; j<cols; ++j) {
            a[i][j] = rand()%90+10;         
        }
    }
}
void print(int a[][5], int rows, int cols) {
     for(int i=0; i<rows; ++i) {  
        for(int j=0; j<cols; ++j) {
            cout << a[i][j] << " "; 
        }
        cout << "\n";
    }   
}
void printColumn(int a[][5], int size, int c) {
    for(int r=0; r<size; ++r) {             // iterate through all the rows in the column
        cout << a[r][c] << " ";             // print all row values in column c
    }
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int ROWS = 4;
    const int COLS = 5;
    int a[ROWS][COLS];

    init(a, ROWS, COLS);
    print(a, ROWS, COLS);

    int c;
    cout << "\nEnter a column to print: ";
    cin >> c;

    printColumn(a, ROWS, c);

    cout << endl;
    return 0;
}
