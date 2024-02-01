// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    string first = "John";
    string last = "Smith";

    // String Concatenation (adding strings)
    cout << "Concatenated string: ";
    string name = first + " " + last;
    cout << name << endl << endl;

    // Shortcut operator Concatenation
    cout << "Concatenated with the shortcut operator: ";
    name += " Jr."; // same as name = name + " Jr."
    cout << name << endl << endl;

    // Strings are "immutable" which means the original string cannot be modified
    // Therefore a new memory space is created every time a string variable is modified
    name = first;
    cout << name << endl;

    cout << endl;
    return 0;
}
