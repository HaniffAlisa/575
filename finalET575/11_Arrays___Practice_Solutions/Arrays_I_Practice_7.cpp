// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(char a[][8], int rows, int cols) {
    for(int r=0; r<rows; r++) {         // iterate a rowsxcols array
        for(int c=0; c<cols; c++) {
            if(r%2==0 && c%2==0)        // if row and column are even store an X
                a[r][c] = 'X';
            else if(r%2!=0 && c%2!=0)   // if row and column are odd store an X
                a[r][c] = 'X';
            else                        // otherwise store a 0
                a[r][c] = '0';
        }
    }
}
void print(char a[][8], int rows, int cols) {
     for(int i=0; i<rows; ++i) {  
        for(int j=0; j<cols; ++j) {
            cout << a[i][j] << " "; 
        }
        cout << "\n";
    }   
}

int main() {
    cout << endl;

    const int ROWS = 8;
    const int COLS = 8;
    char map[ROWS][COLS];

    init(map, ROWS, COLS);
    print(map, ROWS, COLS);

    cout << endl;
    return 0;
}
