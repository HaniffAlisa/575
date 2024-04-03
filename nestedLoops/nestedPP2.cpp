#include <iostream>
using namespace std;

int main(){
    cout <<endl;

    const int DIM = 20;

    for(int i=1; i<=7; ++i){
        for(int j=1; j<=DIM; ++j){
            if(i<=4 && j<=7){
                cout<<"* ";
            }else if(i%2!=0){
                cout<<"= ";

}else{
    cout<<"- ";
            }
        } cout <<"\n";
    }

    return 0;
}