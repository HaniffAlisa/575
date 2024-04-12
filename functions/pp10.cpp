#include<iostream>
using namespace std;

void f2(int a, int b) {                  
    for(int i=b; i>=a; --i) {        
        if(b%i == 0) {                    
    if(i%2 != 0) {                
        cout << i;  
    }
    }
    }
}
int main(){

    f2(2,10);

    return 0;
}