#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 12;                             // test with values 12, 14, 16

    if( x%2 == 0 ) {                        // is x a multiple of 2? ( always runs )
        cout << "multiple of 2" << endl;
    } else if( x%4 == 0 ) {                 // is x a multiple of 4? ( this will never run )
        cout << "multiple of 4" << endl;
    } else if( x%8 == 0 ) {                 // is x a multiple of 8? ( this will never run )
        cout << "multiple of 8" << endl;
    } 

    cout << endl;
    return 0;
}