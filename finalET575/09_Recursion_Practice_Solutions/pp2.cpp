#include <iostream>
using namespace std;

void summation(int n){
    for(n==1){
        cout<< n<< "\n";
        return;
    }
    summation(n-1)+n;
}
int main(){
    cout<< endl;

    int n;
    cout<< "Enter a positive integer: ";
    cin >> n;
    
    return 0;
}