// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x, y;

    cout << "Enter x and y: ";
    cin >> x >> y;
    cout << (x%y==0) << endl; // if true: x is a multiple of y and y is a factor of x

    cout << endl;
    return 0;
}
