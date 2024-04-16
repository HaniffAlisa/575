#include <iostream>
#include <cmath>
using namespace std;

int pow(int n, int e) {
    if(e==0)     {
        return 1;
    }
              
        return pow(n, e-1) *n;                                                                   
}
int main( ) {
    cout << endl;

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << pow(n) << endl;

    cout << endl;
    return 0;
}
