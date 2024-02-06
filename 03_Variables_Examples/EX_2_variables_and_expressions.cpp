// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main()
{
    cout << "\n";

    int x = 1;
    int y = 2;

    cout << "x: " << x << " and " << "y: " << y << "\n\n";

    x = y;                                    // evaluates to (x = 2)
    cout << x << "\n";

    x = 1, y = 2;                             // reset x and y
    x = y + 3;
    cout << x << "\n";

    x = 1, y = 2;                             // reset x and y
    x = 5 + x * y + 1;
    cout << x << "\n";

    x = 1, y = 2;                             // reset x and y
    x = (5 + x) * (y + 1);
    cout << x << "\n";

    cout << "\n";
    return 0;
}
