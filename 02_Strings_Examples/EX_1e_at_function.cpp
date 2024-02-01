// S. Trowbridge 2020
#include <iostream>
#include <string>      // string library included for access to string functions
using namespace std;

int main( ) {
    cout << endl;

    string name = "John Smith";

    // Legal string variable access by index, prints S
    cout << name[5] << endl;

    // Illegal string variable access by index, prints garbage
    // The string does not contain 101 characters, so position 100 is garbage
    cout << name[100] << endl << endl;

    // Safer Method: The at() function
    // Legal string variable access by at function, prints S
    cout << name.at(5) << endl;

    // Illegal string variable access, prints an out_of_range error
    cout << name.at(100) << endl << endl;

    cout << endl;
    return 0;
}
