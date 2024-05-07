// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int numbers[3];                               // declare an array of size 3 (garbage values)
    double grades[4] = {90.3,85.6,65.0,71.3};     // initialize an array of size 5

    cout << numbers[0] << " ";                    // first index is 0 (prints garbage)
    cout << numbers[1] << " ";
    cout << numbers[2] << "\n\n";                 // last index is size-1 (prints garbage)

    cout << grades[0] << " ";                     // first index is 0
    cout << grades[1] << " ";
    cout << grades[2] << " ";
    cout << grades[3] << "\n\n";                  // last index is array size-1

    cout << endl;
    return 0;
}
