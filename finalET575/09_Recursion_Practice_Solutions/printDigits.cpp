#include <iostream>
using namespace std;

void printDigits(int n){
    if(n<10){
        cout<<n <<" ";
        return;
    }
    printDigits(n/10);
    cout<<n%10<<" ";
}
int main() {
    cout <<endl;

    int n;
    cout<< "Enter a 4 digit number: "<<endl;
    cin>> n;

    printDigits(n);

    return 0;
}