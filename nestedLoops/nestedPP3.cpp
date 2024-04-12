#include <iostream>
using namespace std;

int main(){
    cout<< endl;

    const int DIM = 8;

    for(int i=1; i<=DIM; ++i){
        for(int j=1; j<DIM; ++j){
            if((i%2!=0 && j%2!=0)||(i%2==0 && j%2==0)){
                cout<<"X ";
            }else{
                cout<<"O ";
            }
        }cout<<"\n";
    }

    return 0;
}