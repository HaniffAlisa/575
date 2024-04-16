#include <iostream>
using namespace std;


    void countUp(int n){
    if(n==1) {              
        cout << n << "\n";  
        return ;             
    }
    countUp(n-1);                        
    cout << n << "\n";      
            
}

int main( ) {
    cout << endl;

    countUp(5);

    return 0;
}
