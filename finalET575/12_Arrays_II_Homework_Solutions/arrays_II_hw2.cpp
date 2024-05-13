// s. trowbridge 2020
#include <iostream>
#include <ctime>
using namespace std;

void print(const int a[], const int &CAPACITY) {
    for(int i=0; i<CAPACITY; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void offset(int a[], const int &CAPACITY) {
    for(int i=0; i<CAPACITY; i++) {
        a[i] += rand() % 11 - 5;
    }
}

int main() {
    cout << endl;

    srand(time(NULL));

    const int CAPACITY = 5;
    int a[CAPACITY] = {5, 1, 4, 9, 2};

    cout << "Original: ";
    print(a, CAPACITY);
    offset(a, CAPACITY);
    cout << "Offset: ";
    print(a, CAPACITY);

    cout << endl;
    return 0;
}
