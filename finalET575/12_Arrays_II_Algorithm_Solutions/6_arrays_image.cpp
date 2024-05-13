#include <iostream>
using namespace std;

void init(char a[][8], int s1, int s2) {
  for(int i=0; i<s1; ++i) {
    for(int j=0; j<s2; ++j) {
      if(i%2==0 && j>=i || j%2==0 && i>=j) {
        a[i][j] = '0';
      } else {
        a[i][j] = '.';
      }
    }
  }
}

void print(char a[][8], int s1, int s2) {
  for(int i=0; i<s1; ++i) {
    for(int j=0; j<s2; ++j) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}


int main(){
  cout << endl;

  char matrix[8][8];

  init(matrix, 8, 8);
  print(matrix, 8, 8);

  cout << endl;
  return 0;
}
