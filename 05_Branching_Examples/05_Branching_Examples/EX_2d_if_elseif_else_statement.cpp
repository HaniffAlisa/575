#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 1;                              // test with values 1, 2 and any other other value

    if( x == 1 ) {                          // 1st condition true, run 1st code block, skip 2nd code block
        cout << "X is 1 " << endl;
    } else if( x == 2 ) {                   // 1st condition false AND 2nd condition true, skip 1st code block, run 2nd code block
        cout << "X is 2" << endl;
    } else {                                // 1st AND 2nd condition false, skip 1st and 2nd code block, run else code block
        cout << "X is not 1 or 2" << endl;
    }

    cout << endl;
    return 0;
}