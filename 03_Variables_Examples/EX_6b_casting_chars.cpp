// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    char c;
    int i;

    // casting      - convert data from one type to another type
    // ASCII table  - table of characters where each character has an numerical value
    c = 'A';
    i = c;                             // ASCII table conversion of char value into an integer
    cout << c << " " << i << "\n";

    c = 'Z';
    i = c;                             // ASCII table conversion of char value into an integer
    cout << c << " " << i << "\n";

    c = 'a';
    i = c;                             // ASCII table conversion of char value into an integer
    cout << c << " " << i << "\n";

    c = 'z';
    i = c;                             // ASCII table conversion of char value into an integer
    cout << c << " " << i << "\n\n";

    i = 66;
    c = i;                             // ASCII table conversion of integer value into an char
    cout << c << " " << i << "\n";

    i = 89;
    c = i;                             // ASCII table conversion of integer value into an char
    cout << c << " " << i << "\n";

    i = 98;
    c = i;                             // ASCII table conversion of integer value into an char
    cout << c << " " << i << "\n";

    i = 121;
    c = i;                             // ASCII table conversion of integer value into an char
    cout << c << " " << i << "\n";

    cout << "\n";
    return 0;
}
