// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    // Use endl command to terminate the current line
    cout << "This uses an endl command to terminate the line." << endl;

    // Use newline escape character \n to terminate the current line
    cout << "This uses a newline escape sequence to terminate the line.\n";

    // Combine the newline character \n and endl command to print an extra line
    cout << "Combine the newline character and the endl command\n" << endl;

    // Use the tab escape character /t to add a block of space
    cout << "\tIndent using a single tab escape character." << endl;
    cout << endl << endl;       // insert two blank lines

    // Use multiple tab escape characters /t to add blocks of space
    cout << "\t\tIndent using multiple tab escape characters." << endl;
    cout << "\n\n";            // insert two blank lines

    // Combine escape characters with endline
    cout << "Hello\t\tWorld\n" << endl;

    cout << endl;
    return 0;
}
