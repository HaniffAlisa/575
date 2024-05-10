// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int ROWS = 8;
    const int COLS = 8;
    char map[ROWS][COLS];

    // write the image into the array
    for(int r=0; r<ROWS; r++) {         // iterate a rowsxcols array
        for(int c=0; c<COLS; c++) {
            if(r%2==0 && c%2==0)        // if row and column are even store an X
                map[r][c] = 'X';
            else if(r%2!=0 && c%2!=0)   // if row and column are odd store an X
                map[r][c] = 'X';
            else                        // otherwise store a 0
                map[r][c] = '0';
        }
    }

    // print the array
    for(int r=0; r<ROWS; r++) {
        for(int c=0; c<COLS; c++) {
            cout << map[r][c] << " ";    // print array elements
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
