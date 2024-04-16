#include <iostream>
using namespace std;

int power(int n, int e) {
    if(e==0)     {
        return 1;
    }
              
        return power(n, e-1) * n;                                                                   
}
int main( ) {
    cout << endl;

    int n ,e;
    cout << "Enter a positive integer and exponent: ";
    cin >> n >>e ;

    cout << power(n ,e) << endl;

    cout << endl;
    return 0;
}
