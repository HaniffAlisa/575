// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; i++) {
        a[i] = (i+1)*10;
    }
}

void print(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << endl;

    const int SIZE = 10;
    int numbers[SIZE];

    init(numbers, SIZE);
    print(numbers, SIZE);

    cout << endl;
    return 0;
}
