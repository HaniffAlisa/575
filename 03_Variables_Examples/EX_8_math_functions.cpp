// S. Trowbridge 2022
#include <iostream>
#include <cmath>              // cmath libary enables various math functions
using namespace std;

int main() {
    cout << "\n";

    int root = sqrt(36);
    int power = pow(2,5);
    int absVal = abs(-50);
    int roundUp = ceil(6.8);
    int roundDown = floor(6.8);
    int rounded = round(6.8);

    cout << "Square root of 36 = \t\t" << root << "\n\n";
    cout << "2 to the 5th power = \t\t" << power << "\n\n";
    cout << "Absolute value of -50 = \t" << absVal << "\n\n";

    // round up to the nearest integer
    cout << "Ceiling function for 6.8 = \t" << roundUp << "\n\n";
    // round down to the nearest integer
    cout << "Floor function for 6.8 = \t" << roundDown << "\n\n";
    // round up or down to the nearest integer
    cout << "Round function for 6.8 = \t" << rounded << "\n";

    cout << "\n";
    return 0;
}
