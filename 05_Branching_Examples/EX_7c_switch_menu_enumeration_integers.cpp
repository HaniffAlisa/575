// S. Trowbridge 2020
#include <iostream>
using namespace std;

// Enum assigns keywords to constant integer values
// Compiler will now recognize MONDAY in code as 1 (see switch cases) etc.
enum Workdays {
    MONDAY = 1,
    TUESDAY = 2,
    WEDNESDAY = 3,
    THURSDAY = 4,
    FRIDAY = 5,
};

int main()
{
    cout << endl;
    int day;

    cout << "Work Schedule" << endl;
    cout << "-------------" << endl;
    cout << "Select the day you wish to work:\n" << endl;
    cout << "1) Monday" << endl;
    cout << "2) Tuesday" << endl;
    cout << "3) Wednesday" << endl;
    cout << "4) Thursday" << endl;
    cout << "5) Friday" << endl;
    cout << "\nSelect Number> ";
    cin >> day;
    cout << endl;

    // day is an integer
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
