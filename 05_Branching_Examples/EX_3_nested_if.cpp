// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int x, y, z;

    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    cout << "\n";

    // Permutation without Repetition (order matters)
    // 3! = 3 * 2 * 1 or 6 possible orders
    // x y z
    // x z y
    // y x z
    // y z x
    // z x y
    // z y x

    if((x > y) && (x > z))                              // x is largest
    {
        if(y > z)                                       // x > y > z
            cout << x << " " << y << " " << z << endl;
        else                                            // x > z > y
            cout << x << " " << z << " " << y << endl;
    }
    else if((y > x) && (y > z))                         // y is largest
    {
        if(x > z)                                       // y > x > z
            cout << y << " " << x << " " << z << endl;
        else                                            // y > z > x
            cout << y << " " << z << " " << x << endl;
    }
    else if((z > x) && (z > y))                         // z is largest
    {
        if(x > y)                                       // z > x > y
            cout << z << " " << x << " " << y << endl;
        else                                            // z > y > x
            cout << z << " " << y << " " << x << endl;
    }

    cout << endl;
    return 0;
}
