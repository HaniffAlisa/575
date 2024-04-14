#include <iostream>
using namespace std;

int main(){
    cout <<endl;

    const int DIM = 9;

    for(int r = 1; r <= DIM; ++r){
        for (int c = 1; c <= DIM; ++c){
            if(r==DIM/2+1 || c==DIM/2+1)
                cout << "X ";
            else
                cout << "- ";
        }
        cout << endl;
        }
        cout << endl;

    return 0;
}