// S. Trowbridge 2020
#include <iostream>
using namespace std;

void print(const int a[], const int &SIZE) {
    for(int i=0; i<SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void replaceAt(int *a, const int &SIZE, int index, int value) {
    if(index >=0 && index<SIZE) {       // validate index
        a[index] = value;
    }
}

int main() {
    cout << endl;

    const int SIZE = 10;
    int numbers[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    print(numbers, SIZE);

    replaceAt(numbers, SIZE, 4, 40);
    replaceAt(numbers,SIZE, 7, 70);

    print(numbers, SIZE);

    cout << endl;
    return 0;
}
