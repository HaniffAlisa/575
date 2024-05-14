#include <iostream>
using namespace std;

int power(int n, int e) {
    if(e==1){
        return n;
    }
    return power(n , e-1)* n;
}

int main() {
    cout <<endl;

    int n, e;
    cout << "ENter a postivie integer and an exponent: "<<endl;
    cin >> n >>e;

    cout << power(n, e) << endl;
    return 0;
    
}