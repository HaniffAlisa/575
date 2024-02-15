// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    cout.setf(ios::fixed);          // display two decimal places
    cout.precision(2);

                                    // FLOATING-POINT DIVISION
    cout << (10.0 / 3.0) << "\n";   // if a OR b are floating-point, return floating-point
    cout << (10 / 3.0) << "\n";
    cout << (10.0 / 3) << "\n\n";

                                    // INTEGER DIVISION
    cout << (10 / 3) << "\n\n";     // if a AND b are integers, return integer


                                    // MODULO DIVISION
    cout << (10 % 3) << "\n\n";     // a and b must be integers for modulo

    cout << endl;
    return 0;
}
