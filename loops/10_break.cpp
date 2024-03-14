// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 0;

    while( true ) {              // infinite loop (repeats forever)              
        cout << "Enter x: ";
        cin >> x;
        if( x >= 1) { break ;}   // exit loop when x is positive
    }

    cout << endl;
    return 0;
}