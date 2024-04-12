#include <iostream>
using namespace std;

int main (){
    cout <<endl;

    int n = 0;
    cout << "Enter a value for n:"<<endl;
    cin>> n;

    for(int r=1; r<=n; r++){
        for(int c=1; c<=n; c++){
            if(r>=c){
                cout << "*";
            }
        }cout <<"\n";
    }

    return 0;
}