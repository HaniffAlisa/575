// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    char day;

    cout << "Work Schedule" << endl;
    cout << "-------------" << endl;
    cout << "Select the day you wish to work:\n" << endl;
    cout << "M) Monday" << endl;
    cout << "T) Tuesday" << endl;
    cout << "W) Wednesday" << endl;
    cout << "H) Thursday" << endl;
    cout << "F) Friday" << endl;
    cout << "\nSelect Number> ";
    cin >> day;
    cout << endl;


    // day is a character
    switch(day)
    {
        case 'M':   // If the person picked Monday, or option 'M'
            cout << "You will work on Monday.";
            break;
        case 'T':   // If the person picked Tuesday, or option 'T'. etc.
            cout << "You will work on Tuesday.";
            break;
        case 'W':
            cout << "You will work on Wednesday.";
            break;
        case 'H':
            cout << "You will work on Thursday.";
            break;
        case 'F':
            cout << "You will work on Friday.";
            break;
        default:   // If the person did not pick an appropriate option
            cout << "You did not select an available day.";
    }

    cout << endl << endl;
    return 0;
}
