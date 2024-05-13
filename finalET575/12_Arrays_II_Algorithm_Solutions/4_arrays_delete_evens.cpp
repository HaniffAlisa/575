// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void deleteEvens(int *a, int &size) {
    for(int i=0; i<size; ++i) {
        if(a[i]%2 == 0) {                 // if current value is even,
            for(int j=i; j<size-1; ++j) { // left shift the array to delete the value
                a[j] = a[j+1];
            }
            --size;                       // reduce size to reflect deletion
            --i;                          // start again from the new current value
        }
    }
}


void init(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        a[i] = rand()%SIZE;
    }
}
void print(const int a[], const int &SIZE) {
    for(int i=0; i<SIZE; ++i) { cout << a[i] << " "; }
    cout << endl;
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int CAPACITY = 100;
    int a[CAPACITY] = {3,6,7,7,0,0,7,5,6,1}; // 3 7 7 7 5 1
    int size = 10;

    //init(a, size);
    print(a, size);
    //deleteEvens(a, size);
    deleteEvensOptimal(a, size);
    print(a, size);

    cout << endl;
    return 0;
}
