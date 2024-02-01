// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main( ) {
    cout << endl;

    string name;

    // Getline used for phrase input (spaces are allowed)
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Complete input: " << name << endl << endl;

    // Cin used for word input (spaces are not allowed)
    cout << "Enter your full name: ";
    cin >> name;
    cout << "Truncated input: " << name << endl;

    cout << endl;
    return 0;
}
