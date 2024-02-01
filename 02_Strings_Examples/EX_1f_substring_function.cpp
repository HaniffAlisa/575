// S. Trowbridge 2020
#include <iostream>
#include <string>
using namespace std;

int main( ) {
    cout << endl;

    //           01234567890123456 <- index values
    string s1 = "This is a string.";
    cout << s1 << endl << endl;

    // Substr function extracts part of the original string using function parameters
    // 5, 4 are function parameters
    // 1st parameter (5) - this is the index of the first character to print (starting from 0)
    // 2nd parameter (4) - this is the number of characters to print starting 1st parameter value
    cout << s1.substr(5, 4) << endl << endl;

    // Print the original string (substr function does not modify the original string)
    cout << s1 << endl << endl;

    // Assign (store) a subtring of s1 as the value of a new string variable s2
    string s2 = s1.substr(8, 8);

    // Print the value of s2 (which is equivalent to a substring of s1)
    cout << s2 << endl;

    cout << endl;
    return 0;
}
