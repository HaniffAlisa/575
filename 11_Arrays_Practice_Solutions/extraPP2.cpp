#include <iostream>
#include <time.h>
using namespace std; 


int main() {
srand(time(NULL));

const int SIZE = 25;
int even[SIZE];

cout <<endl;

for (int i=0; i<SIZE; ++i){
    even[i]=(i+1)*2;
}
for(int i=0; i<SIZE; ++i){
    cout<<even[i] << " ";
}      
    return 0;
}