#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n;
    cout << " Enter a value for n: " << endl;
    cin >> n ;

    for ( int i=1  ; i<=n; i++){
        if (n%i==0){
            cout << i << endl;
        }
    }
    return 0;
}