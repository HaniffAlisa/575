// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int *a, int size) {
    for(int i=0; i<size; ++i) {
        a[i] = rand()%101;
    }
}
void print(int *a, int size) {
    for(int i=0; i<size; ++i) {
        cout << a[i] << " ";
    }
}
int findMax(int *a, int size) {
    int max = a[0];
    for(int i=1; i<size; ++i) {
        if(max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 20;
    int a[SIZE];

    init(a, SIZE);
    print(a, SIZE);
    int max = findMax(a, SIZE);

    cout << "\nMax = " << max << endl;

    cout << endl;
    return 0;
}
