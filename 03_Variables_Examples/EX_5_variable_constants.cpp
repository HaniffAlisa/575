// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    const string PAYDAY = "Friday";     // the value of a constant variable cannot be changed

    // PAYDAY = "Monday";               // compiler error, cannot change a const

    cout << "You will be paid on " << PAYDAY << ".\n";

    cout << "\n";
    return 0;
}
