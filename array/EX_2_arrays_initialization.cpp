// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int numbers[5]{};                         // {} used to initialized array (size of 5)
    double grades[] = {85.5, 93.2, 76.1};     // initialized array (size of 3 is implied by values)
    int values[10] = {10, 20};                // partially initialized array (size > # of values)

    for(int i=0; i<5; ++i) {                  // iterate from 0 to 4 (0 to size-1)
        cout << numbers[i] << " ";
    }
    cout << "\n\n";

    for(int i=0; i<3; ++i) {                  // iterate from 0 to 2 (0 to size-1)
        cout << grades[i] << " ";
    }
    cout << "\n\n";

    for(int i=0; i<10; ++i) {                 // iterate from 0 to 9 (0 to size-1)
        cout << values[i] << " ";             // values 0-1 were assigned
    }                                         // values 2-9 have a default integer value of 0

    cout << endl;
    return 0;
}
