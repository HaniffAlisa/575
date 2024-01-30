// S. Trowbridge 2022
#include <iostream>
#include <iomanip> // required for setw(x), left and right commands
using namespace std;

int main()
{
    cout << endl;

    // Separating data into columns using tab characters
    cout << "Col1\tCol2\tCol3\n";
    cout << "0\t1\t2\n";
    cout << endl;


    // Problem with separating data into columns using tab characters:
    // Varying data field sizes cannot be formated properly
    cout << "Col1\tCol2\tCol3\n";
    cout << "Some really long text\t1\t2\n";
    cout << endl;


    // Optimal method for separating data into columns.
    // The "setw(X)" command sets the width of the column to X characters.
    cout << left << setw(25) << "Col1" << setw(10) << "Col2" << setw(5) << "Col3" << endl;
    cout << left << setw(25) << "Some really long text" << setw(10) << "1" << setw(5) << "2" << endl << endl;

    // Text alignment, aligns information to the left or right of each column
    cout << right << setw(10) << "Col1" << setw(10) << "Col2" << setw(10) << "Col3" << endl;
    cout << right << setw(10) << "1" << setw(10) << "1" << setw(10) << "2" << endl;

    cout << endl;
    return 0;
}
