// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 1, y = 0;
    cout << "x: " << x << ", y: " << y << endl << endl;

    // Prefix notation:
    // y = (++x) can be thought of as a combination of these two statements:
    // x = x + 1;
    // y = x;
    x = 1, y = 0;
    y = (++x);
    cout << "x: " << x << ", y: " << y << endl;

    // Postfix notation:
    // y = (x++) can be thought of as a combination of these two statements:
    // y = x;
    // x = x + 1;
    x = 1, y = 0;
    y = (x++);
    cout << "x: " << x << ", y: " << y << endl;

    cout << endl;
    return 0;
}
