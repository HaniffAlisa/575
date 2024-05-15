#include <iostream>
using namespace std;
#include<time.h>


void init(int a[], const int  &SIZE){
    for(int i=0; i<SIZE; ++i){
    a[i]= rand()%101;
    }
}
void print(int a[], const int &SIZE) {
    for(int i=0; i<SIZE; ++i){
    cout <<a[i]<<" ";
    }
}
int findMax(int a[], const int &SIZE){
    int max = a[0] ;             // max is the first digit. use that to compare to the others
for(int i=1; i<SIZE; ++i){
    if(max < a[i]){
        max = a[i];
    }
}
return max;
}
int main()  {

srand(time(NULL));   

const int SIZE = 20;
int a[SIZE];

cout<< endl;

init(a, SIZE);
print(a, SIZE);
int max = findMax(a, SIZE);

cout << "Max = " << max << endl;

    return 0;
}