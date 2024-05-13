// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(int *a, int size) {
    for(int i=0; i<size; i++) {
        cout << "[" << i << "] = ";
        cin >> a[i];
    }
}
void print(int *a, int size) {
    for(int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
}
int findMin(int *a, int size) {
    int min = a[0];
    for(int i=0; i<size; i++) {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}
int findMax(int *a, int size) {
    int max = a[0];
    for(int i=0; i<size; i++) {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int main( ) {
    cout << endl;

    const int SIZE = 5;
    int a[SIZE];

    init(a, SIZE);

    cout << "\n";

    print(a, SIZE);

    cout << "\n\nMin: " << findMin(a, SIZE) << endl;
    cout << "Max: " << findMax(a, SIZE) << endl;

    cout << endl;
    return 0;
}
