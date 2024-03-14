// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 0;
    
    do {                                
        cout << "Enter x: ";
        cin >> x;
    } while( x == 1 );          // run code block once, then repeat while x == 1

    cout << endl;
    return 0;
}