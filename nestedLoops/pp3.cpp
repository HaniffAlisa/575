#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 8;

    for(int i=0; i<DIM; ++i) {          // print rows
        for(int j=0; j<DIM; ++j) {      // print columns
            if( (i%2 == 0 && j%2==0) || (i%2 !=0 && j%2 !=0) ) {       
                cout << "X ";
            } else {                    
                cout << "0 ";
            }
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}