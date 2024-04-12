#include<iostream>
using namespace std;

int main(){
    cout << endl;

    const int DIM =5;

    for(int i=1; i<=DIM; ++i){
        for(int j=1; j<=DIM; ++j){
            if(j==i){
                cout <<"X ";
            }else{
                cout << "O ";
            }
        }cout<<"\n";
    }

    return 0;
}