// S. Trowbridge 2020
#include <iostream>
using namespace std;

// declaration
// return_type name();
int getNumber();

int main() {
    cout << endl;

    // function call: name();
    cout << getNumber() << endl;

    cout << endl;
    return 0;
}

// definition
// return_type name() { function_body }
int getNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n; // return an integer
}
