#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 9;

    for(int i=0; i<DIM; ++i) {          
        for(int j=0; j<DIM; ++j) {      
            if(i%2 !=0) {                
                cout << " 0 ";
            } else {                   
                cout << " X ";
            }
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}