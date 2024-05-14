#include <iostream>
using namespace std;

int summation(int n){
    if(n==1){
        return 1;
    }
    return summation(n-1)+n;
}
int main(){
    cout<< endl;

    int n;
    cout<< "Enter a positive integer: ";
    cin >> n;

    cout << summation(n)<< endl;
    return 0;
}