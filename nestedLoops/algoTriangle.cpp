#include <iostream>
using namespace std;

int main() {
    
    const int n = 3;

    for(int i=0; i<n; ++i) {         
        for(int j=0; j<2*n-1; ++j) {     
            if(j>=n-1-i && j<n+i){  
                cout<< "X ";
        }else {
            cout << "  ";
    }
     
        }
         cout << "\n";
    }
    cout << endl;
    return 0;
}