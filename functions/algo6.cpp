#include<iostream>
using namespace std;

int n=0;


void printFactors(int n){
    for(int i=1; i<=n; ++i){
        if(n%i==0){
            cout << i << " ";
        }
    }
    cout<< endl;
}


int main(){
 int n , count = 0;

 do{
    cout<< "Enter a value for n: ";
    cin >> n;
    if(n<1) {break;}
    printFactors(n);
    cout <<endl;
    ++count; 
 } while (n>=1)  ;

cout<< " We printed factors " << count << " times. " <<endl;
 

 cout <<endl;
 return 0; 
}