// S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        a[i] = rand()%90+10;
    }
}

void print(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int getLastIndex(int *a, const int &SIZE, int value) {
    for(int i=SIZE-1; i>=0; --i) {
        if(a[i] == value) {
            return i;
        }
    }
    return -1;
}

void deleteAt(int *a, int &s, int index) {
    if( index >=0 && index<s ) {
        for(int i=index; i<s-1; ++i) { // iterate from index to size-2
            a[i] = a[i+1];
        }
        --s;
    }
}

int main( ) {
    cout << endl;
    srand(time(NULL));

    const int CAPACITY = 100;
    int a[CAPACITY];
    int size = 10;

    init(a, size);
    print(a, size);

    int n;
    cout << "\nSelect a value to delete: ";
    cin >> n;

    int index = getLastIndex(a, size, n);
    if(index != -1) {
        deleteAt(a, size, index);
        print(a, size);
    }


    cout << endl;
    return 0;
}
