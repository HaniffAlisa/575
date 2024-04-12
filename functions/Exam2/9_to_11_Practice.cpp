#include <iostream>
#include <time.h>
using namespace std;

void f1(int a, int b) {                 // f(1, 3)
    for(int i=1; i<=b; ++i) {           // i values:        1   2   3       
        cout << a;                      // output values:   1   1   1
    }
}

void f2(int a, int b) {                 // f(2, 10)
    for(int i=b; i>=a; --i) {           // i values:        10  9   8   7   6   5   4   3   2
        if(b%i == 0) {                  // true values:     T                   T           T
            if(i%2 != 0) {              // true values:                         T
                cout << i;              // output values:                       5
            }
        }
    }
}

void f3(int a, int b) {                 // f(2, 2)
    for(int i=0; i<a; ++i) {            // i values:        0                   1           
        for(int j=i; j<=b; ++j) {       // j values:        0   1   2           1   2
            cout << a;                  // output values:   2   2   2           2   2
        }
    }
}


int main() {
    cout << endl;
    srand(time(NULL));

    f1(1, 3);                           // outputs 111
    cout << "\n\n";

    f2(2, 10);                          // outputs 5
    cout << "\n\n";

    f3(2, 2);                           // 00011
    cout << "\n\n";

    cout << endl;
    return 0;
}



