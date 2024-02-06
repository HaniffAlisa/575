// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int i = 1;
    float f = 66.5;
    char c = 'A';
    bool b = true;

    // implicit casting automatically occurs when an operation is upon two operands of different types
    // values are always cast to the more specific (complex) type
    cout << i << " " << c << " " << f << "\n\n";  // original values

    cout << (i + f) << "\n";                      // i value converted to float before addition
    cout << (i + c) << "\n";                      // c value converted to int before addition
    cout << (c + f) << "\n";                      // f value converted to float before addition
    cout << (b + f) << "\n\n";                    // b value converted to float before addition

    cout << i << " " << c << " " << f << "\n\n";  // original values

    cout << (i = f) << "\n";                      // f value converted to int before storing (data loss, possible logical error)
    cout << (i = c) << "\n";                      // c value converted to int before storing
    cout << (c = f) << "\n";                      // f value converted to char before storing
    cout << (b = c) << "\n\n";                    // c value converted to char before storing

    cout << i << " " << c << " " << f << "\n\n";  // values changed

    cout << "\n";
    return 0;
}
