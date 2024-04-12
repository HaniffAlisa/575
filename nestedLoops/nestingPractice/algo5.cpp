#include<iostream>
using namespace std;

int main(){
    cout<<endl;

    int n=0;
    cout<< "Enter a value for n:";
    cin>>n;

    cout<<endl;

    for(int r=1; r<=n; r++){
        for(int c=1; c<=2*n-1; c++){
            if(c>=n-r+1 && c<=n+r-1){
                cout<< "X";
            } else{
            cout<< " ";
            }
    }    
        cout<< endl;

    }
    return 0;
}