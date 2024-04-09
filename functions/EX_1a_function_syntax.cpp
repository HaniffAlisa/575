// S. Trowbridge 2020
#include <iostream>
using namespace std;

// function definition: return_type name() { function_body }
int getNumber() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    return n; // return the value n which is of type int (matches return type)
}

int main() {
    cout << endl;

    // function call: name()
    // reusable code: print the return value of the each function call
    cout << getNumber() << endl;
    cout << getNumber() << endl;
    cout << getNumber() << endl;

    cout << endl;
    return 0;
}
