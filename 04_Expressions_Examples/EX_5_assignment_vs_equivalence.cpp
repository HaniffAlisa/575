// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int x, y;

    cout << "Enter x and y: ";
    cin >> x >> y;
    cout << (x = y) << endl;            // assign the value of y to x, print value of x

    cout << "\nEnter x and y: ";
    cin >> x >> y;
    cout << (x == y) << endl;           // is x equivalent to y, print true or false

    cout << endl;
    return 0;
}
