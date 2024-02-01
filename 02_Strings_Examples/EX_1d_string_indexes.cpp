// S. Trowbridge 2020
#include <iostream>
#include <string>      // string library included for access to string functions
using namespace std;

int main( ) {
    cout << endl;

    string name = "John Smith";

    // Print a string variable value and length (the number of stored characters)
    // syntax: variablename.length()
    // length of "John Smith" is 10, since there are 10 characters including the space
    cout << "String: " << name << endl;
    cout << "String length: " << name.length() << " characters" << endl << endl;

    // Print each character in the string using string indexes (or indicies)
    // Indexes run from position [0] to position [length - 1]
    cout << "[0] " << name[0] << endl;              // first character
    cout << "[1] " << name[1] << endl;
    cout << "[2] " << name[2] << endl;
    cout << "[3] " << name[3] << endl;
    cout << "[4] " << name[4] << endl;
    cout << "[5] " << name[5] << endl;
    cout << "[6] " << name[6] << endl;
    cout << "[7] " << name[7] << endl;
    cout << "[8] " << name[8] << endl;
    cout << "[9] " << name[9] << endl << endl;      // last character (length-1)

    // Print the first letter of the string
    cout << "first letter index 0: " << name[0] << endl;

    // Print the last letter of the string
    cout << "last letter index 9: " << name[9] << endl << endl;

    // Print the last letter of the string using the length function
    cout << "last letter: " << name[name.length()-1] << endl << endl;

    cout << endl;
    return 0;
}
