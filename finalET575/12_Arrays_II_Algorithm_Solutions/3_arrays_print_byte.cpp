// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

// toByte(a, 8)
//  toByte(a, 7)
//    toByte(a, 6)
//      toByte(a, 5)
//        toByte(a, 4)
//          toByte(a, 3)
//            toByte(a, 2)
//              toByte(a, 1) returns a[0]
//            toByte(a, 2) returns a[0] * 10 + a[1]
//          toByte(a, 3) returns (a[0] * 10 + a[1]) * 10 + a[2]
//        toByte(a, 4) returns (etc.) * 10 + a[3]
//      toByte(a, 5) returns (etc.) * 10 + a[4]
//    toByte(a, 5) returns (etc.) * 10 + a[5]
//  toByte(a, 7) returns (etc.) * 10 + a[6]
// toByte(a, 8) returns (etc.) * 10 + a[7]
//
// Given 1 1 1 1 1 1 0 0
// toByte(a, 1) returns 1
// toByte(a, 2) returns 11
// toByte(a, 3) returns 111
// toByte(a, 4) returns 1111
// toByte(a, 5) returns 11111
// toByte(a, 6) returns 111111
// toByte(a, 7) returns 1111110
// toByte(a, 8) returns 11111100
int toByte(int *a, int size) {
    if(size == 1) {
        return a[size-1];
    }
    return toByte(a, size-1) * 10 + a[size-1]; // left shift
}




void init(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        a[i] = rand()%2;
    }
}

void print(int *a, int size) {
    for(int i=0; i<size; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void printRec(int *a, int size) {
    if(size == 1) {
        cout << a[size-1] << " ";
        return;
    }
    printRec(a, size-1);
    cout << a[size-1] << " ";
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 8;
    int a[SIZE];

    init(a, SIZE);
    cout << "Array: " << endl;
    print(a, SIZE);

    cout << "\nNumber: " << endl;
    cout << toByte(a, SIZE) << endl;
    cout << "\n";
    printRec(a, SIZE);

    cout << endl << endl;
    return 0;
}
