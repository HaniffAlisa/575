// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    double number;                   // floating point variable

    number = 1;
    cout << "a: " << number << endl; // display integer if number is whole

    number = 1.0;
    cout << "b: " << number << endl; // display integer if number is whole

    number = 1.5;
    cout << "c: " << number << endl; // display floating point since number is not whole

    number = 1.0;
    cout.setf(ios::fixed);           // force floating point format
    cout << "d: " << number << endl; // display a floating pointer number

    cout.precision(3);               // force a specific number of decimal places
    cout << "e: " << number << endl; // display a floating point with 3 decimal places

    cout << endl;
    return 0;
}
