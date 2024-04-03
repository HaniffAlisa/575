#include <iostream>
using namespace std;

int main() {
    cout << endl;

    constant int DIM;

    for(int i=0 ; i<DIM; ++i){
        for (int j=0; j<DIM; ++j){
            if(i=DIM/2 || j=DIM/2){
                cout << "X " << endl;
            }
            else{
                cout<< "O "<< endl;
            }
        }
    }

    return 0;
}