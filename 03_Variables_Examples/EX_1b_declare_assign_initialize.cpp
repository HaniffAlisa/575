// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    int i;                            // declare a variable of type int
    cout << i << "\n";                // print garbage

    i = 5;                            // assign a variable
    cout << i << "\n";                // print the assigned value

    int j = 6;                        // initialize a variable (declare + assign)
    cout << j << "\n";

    j = i;                            // assign from the RHS to the LHS
    cout << i << " " << j << "\n";    // i and j have the same value (original value of j)

    cout << "\n";
    return 0;
}
