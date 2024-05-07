// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string s = "Hello";                   // initialize a string variable

    char a[] = {'A','B','C','D','E'};     // initialize an array of 5 characters

    for(int i=0; i<10; i++) {             // loop boundaries exceed array boundaries, should be 0-4
        cout << a[i] << "\n";             // indexes 0-4 print array values
    }                                     // indexes 5-9 print garbage

    cout << endl;
    return 0;
}
