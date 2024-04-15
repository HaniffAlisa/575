#include <iostream>
using namespace std;

bool isEven(int n);

int main(){
    cout << endl;

    int n = 0;
    cout << "Enter a value for n: " << endl;
    cin >> n;

    if(isEven(n)){
        cout << n << " is an even number." << endl;
    }else{
        cout << n << " is an odd number." << endl;
    }
    return 0;
}
bool isEven(int n){
    return n % 2 == 0;
}