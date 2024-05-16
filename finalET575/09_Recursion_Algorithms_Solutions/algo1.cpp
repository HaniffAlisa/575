#include <iostream>
using namespace std;

int sumDigits( int n){
    if (n<10){
        return n;
    }
    return sumDigits(n/10)+n%10;
}
int main(){
    cout <<endl;

int n;
cout<< "Enter a positive integer: "<<endl;
cin>>n;

cout<< sumDigits(n)<<endl;

    return 0;
}