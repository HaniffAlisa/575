#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 1;                          // test with values 1, 2, and any other other value

    if( x == 1 ) {                      // condition true, run 1st code block, skip 2nd code block
        cout << "X is 1 " << endl;
    } else {                            // condition false, skip 1st code block, run 2nd code block
        cout << "X is not 1" << endl;
    }

    // conditional if statement (alternative syntax)
    //x == 1 ? cout << "X is 1 " << endl : cout << "X is not 1" << endl;

    cout << endl;
    return 0;
}