// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 0;

    while( x != 3 ) {                                       // repeat menu until 3 is input (3 is the sentinel value) 
        cout << "1. Left" << endl;
        cout << "2. Right" << endl;
        cout << "3. Exit" << endl;
        cout << "\nSelect: ";
        cin >> x;

        switch(x) {                                         // check value of x
            case 1:                                         // if x == 1
                cout << "\nYou go left.\n\n";                       
                break;                                      // exit switch codeblock
            case 2:                                         // else if x == 2
                cout << "\nYou go right.\n\n";
                break;                                      // exit switch codeblock
            case 3:                                         // else if x == 3
                break;                                      // exit switch codeblock
            default:
                cout << "Invalid selection." << endl;       // if x != 1, 2 or 3 (invalid input)
        }
    }

    cout << "\nGame Over" << endl;

    cout << endl;
    return 0;
}