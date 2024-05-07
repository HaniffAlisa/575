// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    char cstr[] = "Hello";    // initialize a c-string
                              // c-strings end with a hidden null character '\0'

    cout << cstr << "\n";   // print a c-string

    int i=0;
    while(cstr[i] != '\0') {  // iterate until you reach the nulll character '\0'
        cout << cstr[i];
        ++i;
    }
    cout << "\n";

    for(int i=0; i<5; ++i) {  // iterate from 0 to 4 (0 to size-1)
        cout << cstr[i];
    }

    cout << endl;
    return 0;
}
