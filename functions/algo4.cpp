#include<iostream>
using namespace std;

/*

5! = 5*4*3*2*1      
product = procduct = next digit

*/
int n;
cout<< "Enter a value for n: "<<endl;
cin>>n;

int factorial(int n){
    int p=1;
    for(int i=1; i<=n; ++i){
        p*=i;
    }
   return p; 
}
int summation(int n){
    int p=0;
    for(int i=1; i<=n; ++i){
        p+=i;
    }
    return p;
}


int main(){
    cout << endl;

    int n;
    cout << "Enter a value for n:";
    cin >>n;

    cout 
    
    cout <<endl;

    return 0;
}