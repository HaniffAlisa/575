// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(float *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        a[i] = rand()%900+100;
    }
}

void copyArray(float *source, float *dest, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        dest[i] = source[i];
    }
}

void reverseArray(float *a, const int &SIZE) {
    for(int i=0, j=SIZE-1; i<SIZE/2; ++i, --j) {
        float temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void print(float *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main( ) {
    cout << endl;

    srand(time(NULL));

    const int SIZE = 10;
    float n1[SIZE];
    float n2[SIZE];

    init(n1,SIZE);
    copyArray(n1,n2,SIZE);

    reverseArray(n1,SIZE);

    cout << "Array 1: ";
    print(n1,SIZE);
    cout << "\n";

    cout << "Array 2: ";
    print(n2,SIZE);

    cout << endl;
    return 0;
}
