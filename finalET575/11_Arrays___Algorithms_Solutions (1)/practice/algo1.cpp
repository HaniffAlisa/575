#include <iostream>
using namespace std;
#include<time.h>

int main(){
const int SIZE = 20;
int a[SIZE];

srand(time(NULL));

for(int i=0; i<SIZE; ++i){
    a[i]= rand()%101;
}
for(int i=0; i<SIZE; ++i){
    cout <<a[i]<<" ";
}

cout<< endl;

int max = a[0] ;             // max is the first digit. use that to compare to the others
for(int i=1; i<SIZE; ++i){
    if(max < a[i]){
        max = a[i];
    }
}

cout << "Max = " << max << endl;

    return 0;
}