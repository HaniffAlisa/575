// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    double money;
    cout << "Dollar Convertor: ";
    cin >> money;

    cout.setf(ios::fixed);          // display two decimal places
    cout.precision(2);
    cout << "$" << money << "\n";

    cout.precision(5);              // display five decimal places
    cout << money << "\n";

    cout << "\n";
    return 0;
}
