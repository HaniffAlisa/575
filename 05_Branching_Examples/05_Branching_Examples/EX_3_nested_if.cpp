#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 10;                                                 // test 10, 15, 5, -5

    if( x >= 10 ) {                                             // outer if ( greater than 10 )     
        if( x == 10 ) {                                         //      inner if ( equal to 10 )
            cout << "X is 10" << endl;
        } else {                                                //      inner else ( greater than 10 )
            cout << "X is greater than 10" << endl;
        }
    } else {                                                    // outer else ( less than 10 )
        if( x >= 0 ) {                                          //      inner if ( positive but less than 10 )
            cout << "X is positive and less than 10" << endl;
        } else {
            cout << "X is negative" << endl;                    //      inner else ( negative )
        }
    }

    cout << endl;
    return 0;
}