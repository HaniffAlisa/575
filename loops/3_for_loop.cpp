// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x=1;

    for(int i=0; i<5; ++i) {   // increment i from 0 to 4 inclusive (while i < 5), repeat codeblock 5 times
        cout << "Enter x: ";
        cin >> x;                              
    }

    cout << endl;
    return 0;
}