// S. Trowbridge 2020
#include <iostream>
using namespace std;

// Enum assigns keywords to constant integer values
// Compiler will now recognize MONDAY in code as 'M' (see switch cases) etc.
enum Workdays {
    MONDAY = 'M',
    TUESDAY = 'T',
    WEDNESDAY = 'W',
    THURSDAY = 'H',
    FRIDAY = 'F',
};

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

    // Convert any lower case letters to uppercase
    if(static_cast<int>(day) >  97)
        day = static_cast<char>(static_cast<int>(day)-32);

    // day is a character
    switch(day)
    {
        case MONDAY:   // If the person picked Monday, or option 1
            cout << "You will work on Monday.";
            break;
        case TUESDAY:   // If the person picked Tuesday, or option 2. etc.
            cout << "You will work on Tuesday.";
            break;
        case WEDNESDAY:
            cout << "You will work on Wednesday.";
            break;
        case THURSDAY:
            cout << "You will work on Thursday.";
            break;
        case FRIDAY:
            cout << "You will work on Friday.";
            break;
        default:   // If the person did not pick options 1 through 5
            cout << "You did not select an available day.";
    }

    cout << endl;
    return 0;
}
