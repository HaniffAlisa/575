// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x, count = 0;                       // initialize count to 0   

    do {                         
        cout << "Enter a value for x: ";
        cin >> x;
        if(x == 1) { ++count; }             // increment count every time 1 is input
    } while( x == 1 );

    cout << "You entered 1 a total of " << count << " times." << endl;

    cout << endl;
    return 0;
}