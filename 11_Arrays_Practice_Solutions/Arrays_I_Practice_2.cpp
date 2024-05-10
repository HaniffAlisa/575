// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 25;
    int evens[SIZE];

    // write data
    for(int i=0; i<SIZE; ++i) {     // iterate from 0 to 24 (0 to size-1)
        evens[i] = (i+1)*2;         // store evens from 1 to 50 inclusive
    }

    // read data
    for(int i=0; i<SIZE; ++i) {     // iterate from 0 to 24 (0 to size-1)
        cout << evens[i] << " ";
    }

    cout << endl;
    return 0;
}
