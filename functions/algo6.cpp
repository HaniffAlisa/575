#include<iostream>
using namespace std;

int n=0;


void printFactors(int n){
    for(int i=1; i<=n; ++i){
        if(n%i==0){
            cout << i << " ";
        }
    }
}


int main(){
 int n;
 do{
    cout<< "Enter a value for n: ";
    cin >> n;
 } while (!(n>=1)); 

 cout <<endl;
 return 0; 
}