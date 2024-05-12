// S. Trowbridge 2020
#include <iostream>
using namespace std;

void initFlag(char a[][20], int rows, int cols) {
  for(int r=0; r<rows; r++) {
      for(int c=0; c<cols; c++) {
          if(r<4 && c<7)
              a[r][c] = '*';
          else if(r%2==0)
              a[r][c] = '=';
          else
              a[r][c] = '-';
      }
  }
}
void print(char a[][20], int rows, int cols) {
     for(int i=0; i<rows; ++i) {  
        for(int j=0; j<cols; ++j) {
            cout << a[i][j] << " "; 
        }
        cout << "\n";
    }   
}

int main( ) {
    cout << endl;
    const int ROWS = 7;
    const int COLS = 20;
    char a[ROWS][COLS];

    initFlag(a, ROWS, COLS);
    print(a, ROWS, COLS);

    cout << endl;
    return 0;
}
