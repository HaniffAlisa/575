#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 1;                      // test with values 1, 2, and any other other value

    if( x == 1 ) {                  // condition true, run code block
        cout << "X is 1 " << endl;
    }

    if( x == 2 ) {                  // condition false, skip the code block
        cout << "X is 2" << endl;
    }

    cout << endl;
    return 0;
}