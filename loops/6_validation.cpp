// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 0;

    while( x <= 0 ) {                                   // while x is not positive, repeat the codeblock
        cout << "Enter a postive integer: ";
        cin >> x;
    }

    cout << "\nValid! Program continues..." << endl;   // now that we have a positive value, we can continue the program

    cout << endl;
    return 0;
}