// S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    cout << endl;
    srand(time(NULL));                      // time based seed

    const int ROWS = 4;
    const int COLS = 5;
    int a[ROWS][COLS];

    for(int i=0; i<ROWS; ++i) {             // ROWSxCOLS two-dimensional array
        for(int j=0; j<COLS; ++j) {
            a[i][j] = rand()%90+10;
        }
    }

    for(int i=0; i<ROWS; ++i) {             // ROWSxCOLS two-dimensional array
        for(int j=0; j<COLS; ++j) {
            cout << a[i][j] << " ";         // print each element
        }
        cout << "\n";
    }

    int c;
    cout << "\nEnter a column to print: ";
    cin >> c;

    for(int i=0; i<ROWS; ++i) {             // iterate through rows
        cout << a[i][c] << " ";             // print all row values in the specific column
    }

    cout << endl;
    return 0;
}
