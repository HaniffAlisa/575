#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int x = 16;                             // test with values 12, 14, 16

    if( x%8 == 0 ) {                        // is x a multiple of 8? ( most specific case first )
        cout << "multiple of 8" << endl;
    } else if( x%4 == 0 ) {                 // is x a multiple of 4? 
        cout << "multiple of 4" << endl;
    } else if( x%2 == 0 ) {                 // is x a multiple of 2? ( most general case last )
        cout << "multiple of 2" << endl;
    } 

    cout << endl;
    return 0;
}