#include <iostream>
using namespace std;

int main() {
    cout << endl;

    
    const int n = 3;

    for(int i=0; i<n; ++i) {         
        for(int j=0; j<2*n-1; ++j) {     
            if(j>=i && j<2*n-1-i){  
                cout << "X "<<;
        }else {
            cout << "  ";
    }
        }
    }
    cout << endl;
    return 0;
}