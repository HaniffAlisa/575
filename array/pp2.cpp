#include <iostream>
using namespace std;

int main(){

cout <<endl;

const int SIZE = 25;
int even[SIZE];


//write data  ***storing data
for(int i=0; i<SIZE; ++i){
    even[i]=(i+1)*2;
}
//read the data ***print
for(int i=0; i<SIZE; ++i){
    cout << even[i]<< " ";
}

return 0;
}