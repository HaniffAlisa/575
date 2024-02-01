// S. Trowbridge 2020
#include <iostream>
#include <string>
using namespace std;

int main( ) {
    cout << endl;

    string name = "John Smith";
    cout << name << endl << endl;

    // Insert a middle name
    name.insert(5, "Jay ");
    cout << name << endl << endl;

    // Append the "Jr." suffix to the string
    name.append(" Jr.");
    cout << name << endl << endl;

    // Replace the middle name
    name.replace(5, 3, "Joseph");
    cout << name << endl << endl;

    // Find the location of the first occurence of the substring "Jo"
    cout << name.find("J") << endl << endl;

    // Remove the middle name
    name.erase(5, 7);
    cout << name << endl;

    cout << endl;
    return 0;
}
