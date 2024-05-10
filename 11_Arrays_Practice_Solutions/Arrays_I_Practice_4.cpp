// S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    cout << endl;
    srand(time(NULL));                  // time based seed

    const int SIZE = 20;                // constant variable
    int a[SIZE];                        // declare an array of size 20

    for(int i=0; i<SIZE; ++i) {         // iterate from 0 to 19 (0 to size-1)
        a[i] = rand()%SIZE;             // store a random value from 0 to SIZE-1
    }

    for(int i=0; i<SIZE; ++i) {
        cout << a[i] << " ";            // print array values
    }

    int n;
    cout << "\n\nEnter an integer: ";
    cin >> n;

    for(int i=0; i<SIZE; ++i) {         // linear search (check values from start to end, return index if found)
        //cout << "check if " << n << " == " << a[i] << "\n";
        if(a[i] == n) {                 // if the current element is n,
            cout << i << endl;          // print the index
        }
    }

    cout << endl;
    return 0;
}
