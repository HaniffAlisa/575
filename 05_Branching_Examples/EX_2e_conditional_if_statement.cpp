// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;
    cout << endl;

    cout << "Is " << x << " greater than or equal to " << y << "? " << endl;

    x > y ? cout << "X greater\n" : cout << "Y greater\n"; // condition if statement

    if(x > y) {                                            // same as the above conditional if statement
        cout << "X greater\n";
    } else {
        cout << "Y greater\n";
    }

    cout << endl;
    return 0;
}
