// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int x, y;

    cout << "Enter x and y: ";
    cin >> x >> y;

    cout << "X assigned to " << x << endl;
    cout << "Y assigned to " << y << endl << endl;

    if(x > y) {                           // if this condition is true, run this codeblock, then jump to line 24
        cout << "X > Y\n\n";
    } else if(x < y) {                    // otherwise, if this condition is true, run this codeblock, then jump to line 24
        cout << "X < Yn\n";
    } else if(x == y) {                   // otherwise, if this condition is true, run this codeblock, then jump to line 24
        cout << "X == Yn\n";
    }

    return 0;
}
