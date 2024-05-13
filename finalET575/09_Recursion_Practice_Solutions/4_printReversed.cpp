// s. trowbridge 2020
#include <iostream>
using namespace std;

//  printReversed(Hello, 5) print o
//    printReversed(Hello, 4) print l
//      printReversed(Hello, 3) print l
//        printReversed(Hello, 2) print e
//          printReversed(Hello, 1) print H
//        printReversed(Hello, 2)
//      printReversed(Hello, 3)
//    printReversed(Hello, 4)
// printReversed(Hello, 5)
void printReversed(string s, int length) {
    if(length==1) {
        cout << s[length-1] << "\n";
        return;
    }
    cout << s[length-1] << "\n";
    printReversed(s, length-1);
}

int main() {
    cout << endl;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    printReversed(s, s.length());

    cout << endl;
    return 0;
}
