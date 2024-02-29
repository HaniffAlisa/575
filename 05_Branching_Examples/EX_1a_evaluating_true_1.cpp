// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int w = 4, x = 3, y = 2, z = 1;
    cout << "w = 4\nx = 3\ny = 2\nz = 1\n\n";

    cout << (w > x) << endl;
    cout << (y < z) << endl << endl;

    // (w > x) && (y < z)
    // T && F
    // F
    cout << ((w > x) && (y < z)) << endl;

    // (w > x) || (y < z)
    // T || F
    // T
    cout << ((w > x) || (y < z)) << endl;

    cout << endl;
    return 0;
}
