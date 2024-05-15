#include <iostream>
#include <time.h>
using namespace std;

int main(){
    cout <<endl;

    srand(time(NULL));

    const int SIZE =20;
    int a[SIZE];

    for(int i=0; i<SIZE; ++i){
        a[i]=rand()%101;
    }
    for(int i=0; i<SIZE; ++i){
        cout << a[i] << " ";
    }
    cout <<endl;
    int max = a[0];

    for(int i=1; i<SIZE; ++i){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout << "MAX = " <<max << endl;
    
    return 0;
}