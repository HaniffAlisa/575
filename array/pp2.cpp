#include <iostream>
using namespace std;

int main(){

cout <<endl;

const int SIZE = 25;
int even[SIZE];

for(int i=0; i<SIZE; ++i){
    even[i]=i;
}

for(int i=0; i<SIZE; ++i){
    cout << even[i]<< " ";
}

return 0;
}