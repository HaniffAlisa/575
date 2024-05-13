// s. trowbridge 2020
#include <iostream>
#include <ctime>
using namespace std;

void print(const int a[], const int &SIZE) {
    for(int i=0; i<SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool hasValue(int a[], const int &size, int value) {
    for(int i=0; i<size; i++) {
        if(a[i] == value) {
            return true;
        }
    }
    return false;
}

void randArray(int a[], const int &CAPACITY, int &size) {
    for(int i=0; i<CAPACITY; i++) {
        int num;
        do {
            num = rand() % CAPACITY;
        } while( hasValue(a, size, num) );
        a[i] = num;
        size++;
    }
}

int main() {
    cout << endl;

    srand(time(NULL));

    const int CAPACITY = 10;
    int a[CAPACITY];
    int size = 0;

    randArray(a, CAPACITY, size);
    print(a, size);

    cout << endl;
    return 0;
}
