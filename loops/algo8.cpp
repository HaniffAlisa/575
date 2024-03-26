#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n;
    cout << " Enter a valur for n: " << endl;

    for ( int i=n  ; i >0; i++){
        if (n/i==0){
            cout << i << endl;
        }
    }
    return 0;
}