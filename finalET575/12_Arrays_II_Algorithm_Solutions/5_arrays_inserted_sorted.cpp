// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void insertSorted(int *a, const int &CAPACITY, int &size, int value) {
    if(size < CAPACITY) {
        int index = 0;
        for(int i=0; i<size; ++i) {       // find the sorted position to insert
            if(a[i] > value) {
                break;
            }
            ++index;
        }
        for(int i=size; i>index; --i) {   // shift the array to make room
            a[i] = a[i-1];                // current = previous
        }
        a[index] = value;                 // insert the element
        ++size;                           // update the array size
    }
}

void print(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) { cout << a[i] << " "; }
    cout << endl;
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int CAPACITY = 100;
    int a[CAPACITY] = {10,20,30,40,50,60,70,80,90,100};
    int size = 10;

    print(a, size);
    insertSorted(a, CAPACITY, size, 25);
    insertSorted(a, CAPACITY, size, 5);
    insertSorted(a, CAPACITY, size, 55);
    insertSorted(a, CAPACITY, size, 150);
    print(a, size);

    cout << endl;
    return 0;
}
