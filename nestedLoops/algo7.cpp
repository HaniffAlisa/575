#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int n = 4;

    for(int b=0; b<n; ++b) {          
        for(int i=0; i<n; ++i) {   
            for(int j=0; j<n; ++j)   {
            if(j<=i) {                  
                cout << "X ";
            } 
            cout <<"\n ";
        }  
        cout << "\n";
    }

    cout << endl;
    }
    return 0;
}