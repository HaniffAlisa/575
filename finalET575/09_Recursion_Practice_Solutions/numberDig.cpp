#include<iostream>
using namespace std;

int countDigits(int n){
    if(n<10){
        return 1;
    }
    return countDigits(n/10)+1;
}


int main(){
    cout <<endl;
    long n;
    cout<< "Enter a number with multiple digits: "<<endl;
    cin >> n;

    cout << countDigits(n) << endl;
    return 0;
}