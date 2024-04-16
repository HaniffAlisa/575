#include <iostream>
using namespace std;

int main(){
    cout << endl;

    int countUp(int n) {
    if(n==5) {              
        cout << n << "\n";  
        return;             
    }
                            
    cout << n << "\n";      
    countUp(n+1);         
}

int main( ) {
    cout << endl;

    countUp(5);

    return 0;
}
}