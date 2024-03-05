// S. Trowbridge 2020
#include <iostream>
using namespace std;

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
        case 1:  // if
            cout << "You will work on Monday.";
            break;
        case 2:   // else-if
            cout << "You will work on Tuesday.";
            break;
        case 3:  // else-if
            cout << "You will work on Wednesday.";
            break;
        case 4:  // else-if
            cout << "You will work on Thursday.";
            break;
        case 5:  // else-if
            cout << "You will work on Friday.";
            break;
        default:   // else
            cout << "You did not select an available day.";
    }

    cout << endl << endl;
    return 0;
}
