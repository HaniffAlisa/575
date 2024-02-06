// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    bool b;
    int i;

    // casting booleans - 0 is false, any other value is true
    // booleans print as 0 (false) or 1 ( true)
    b = true;
    cout << b << "\n";

    b = false;
    cout << b << "\n\n";

    i = 1000;
    b = i;                             // convert integer into boolean
    cout << b << " " << i << "\n";

    i = -1000;
    b = i;                             // convert integer into boolean
    cout << b << " " << i << "\n";

    i = 0;
    b = i;                             // convert integer into boolean
    cout << b << " " << i << "\n\n";

    cout << "\n";
    return 0;
}
