// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 1, y = 2;

    x = y;                // = is a binary operator with two operands x and y
    cout << x << endl;

    x = -y;               // - is a unary operator with one operand y
    cout << x << endl;

    x = y - x;            // - is a binary operator with two operands x and y
    cout << x << endl;

    cout << endl;
    return 0;
}
