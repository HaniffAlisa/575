#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int DIM = 9;

    for(int i=0 ; i<DIM; ++i){
        for (int j=0; j<DIM; ++j){
            if(i==DIM/2 || j==DIM/2){
                cout << "X " << endl;
            }
            else{
                cout<< "O "<< endl;
            }
        } cout << "\n";
    }
    return 0;
}