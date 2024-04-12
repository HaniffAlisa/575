// S. Trowbridge 2020
#include <iostream>
using namespace std;

// void function with a return statement for early termination
void iterateUntilNSquared(int n) {
    for(int i=1; i<=100000; ++i) {
        cout << i << " ";
        if(i/n == n) { return; }  // exit function early based upon value of n
    }
}

int main() {
    cout << endl;

    iterateUntilNSquared(5);

    cout << endl;
    return 0;
}
