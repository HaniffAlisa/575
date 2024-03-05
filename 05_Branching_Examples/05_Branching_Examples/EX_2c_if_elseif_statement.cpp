#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 1;                          // test with values 1, 2, and any other other value

    if( x == 1 ) {                      // 1st condition true, run 1st code block, skip 2nd code block
        cout << "X is 1 " << endl;
    } else if( x == 2 ) {               // 1st condition false AND 2nd condition true, skip 1st code block, run 2nd code block
        cout << "X is 2" << endl;
    }

    cout << endl;
    return 0;
}