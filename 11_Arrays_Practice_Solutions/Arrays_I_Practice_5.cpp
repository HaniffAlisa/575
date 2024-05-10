// S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    cout << endl;
    srand(time(NULL));                  // time based seed

    const int SIZE = 10;                // constant variable
    int a[SIZE];                        // declare an array of size 20

    for(int i=0; i<SIZE; ++i) {         // iterate from 0 to 19 (0 to size-1)
        a[i] = rand()%SIZE;             // store a random value from 0 to SIZE-1
    }

    for(int i=0; i<SIZE; ++i) {
        cout << a[i] << " ";            // print array values
    }
    cout << "\n\n";

    double sum = 0;                     // default a sum variable
    for(int i=0; i<SIZE; ++i) {
        sum+=a[i];                      // sum all array values

        //cout << "add " << a[i] << ", sum is " << sum << "\n";
    }
    cout << "\n" << (sum / SIZE) << " ";  // print the average (sum / number of elements)

    cout << endl;
    return 0;
}
