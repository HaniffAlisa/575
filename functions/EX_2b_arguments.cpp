// S. Trowbridge 2020
#include <iostream>
using namespace std;

// input data sent to parameter n
int getNumber(int n);

int main() {
    cout << endl;

    // literal as argument, value copied to parameter n
    int num1 = getNumber(6);
    cout << num1 << endl;

    // variable as argument, value copied to parameter n
    int x = 5;
    int num2 = getNumber(x);
    cout << num2 << endl;

    cout << endl;
    return 0;
}

int getNumber(int n) {
    return n;
}
