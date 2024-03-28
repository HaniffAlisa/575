#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 20;

    for(int i=0; i<7; ++i) {          
        for(int j=0; j<DIM; ++j) {      
            if(j<7 && i<4) {                      
                cout << "* ";
            } else if (i%2 ==0){                   
                cout << "= ";              
                cout <<"- ";
        }
        cout << "\n";
    }

    cout << endl;
    return 0;
}