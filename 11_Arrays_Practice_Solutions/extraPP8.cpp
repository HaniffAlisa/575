#include <iostream>
#include<time.h>
using namespace std;

int main(){
    cout <<endl;

    srand(time(NULL));

    const int ROW= 4;
    const int COL=5;
    int a[ROW][COL];

    for(int i=0; i<ROW; ++i){
        for(int j=0; i<COL; ++j){
            a[i][j] = rand()%90+10;
        }
    }
    for(int i=0; i<ROW; ++i){
        for(int j=0; j<COL; ++j){
            cout<< a[i][j]<<" ";
}
    cout<<endl;

    }
    int c;
    cout<<"\nEnter a column to print: ";
    cin >> c;

    for(int i=0; i<ROW; ++i){
      cout << a[i][c]<< " ";  
    }

    cout << endl;
    return 0;
}