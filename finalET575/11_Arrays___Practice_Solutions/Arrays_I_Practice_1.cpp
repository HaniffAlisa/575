// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string person[] = {"John", "William", "Henry"};

    cout << person[1] << endl;      // print the 2nd element

    for(int i=0; i<3; ++i) {        // iterate from 0 to 2 (0 to size-1)
        cout << person[i] << " ";   // print each array value
    }

    cout << endl;
    return 0;
}
