// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 2;                  

    while( x == 1 ) {        // loop will never run since x != 1              
        cout << "Enter x: ";
        cin >> x;
    }

    cout << endl;
    return 0;
}