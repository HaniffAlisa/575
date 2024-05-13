// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(int *a, int size) {
    for(int i=0; i<size; ++i) {     // iterate from 0 to 24 (0 to size-1)
        a[i] = (i+1)*2;             // store evens from 1 to 50 inclusive
    }
}
void print(int *a, int size) {
    for(int i=0; i<size; ++i) {     // iterate from 0 to 24 (0 to size-1)
        cout << a[i] << " ";
    }  
}

int main() {
    cout << endl;

    const int SIZE = 25;
    int evens[SIZE];

    init(evens, SIZE);
    print(evens, SIZE);

    cout << endl;
    return 0;
}
