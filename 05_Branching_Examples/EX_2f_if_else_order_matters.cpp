// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "\n";

    if(x%2 == 0) {                              // true if multiple of 2, 4, 6, 8 etc.
        cout << x << " is a multiple of 2\n";
    } else if(x%4 == 0) {                       // unreachable statement
        cout << x << " is a multiple of 4\n";
    }

    cout << endl;
    return 0;
}
