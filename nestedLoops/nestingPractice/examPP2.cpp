#include <iostream>
using namespace std;

int main(){
    cout <<endl;

    const int DIM= 20;

    for(int r = 1; r <= 7; ++r){
        for (int c = 1; c<=DIM; ++c){
            if(r<=4 && c<=7){
                cout << "* ";
            }else{
                cout << "= ";
            }

        }
        cout << endl;
    }

        cout << endl;
    return 0;
}