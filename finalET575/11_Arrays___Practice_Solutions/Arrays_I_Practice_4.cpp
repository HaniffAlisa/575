// S. Trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int *a, int size) {
    for(int i=0; i<size; ++i) {         
        a[i] = rand()%size;             // store a random value from 0 to size-1
    }
}

void print(int *a, int size) {
    for(int i=0; i<size; ++i) {     
        cout << a[i] << " ";
    }  
}

void getIndexes(int *a, int size, int v) {
    for(int i=0; i<size; ++i) {         // linear search (check values from start to end, return index if found)
        if(a[i] == v) {                 // if the current element is n,
            cout << i << endl;          // print the index
        }
    }
}

int main() {
    cout << endl;
    srand(time(NULL));                  // time based seed

    const int SIZE = 20;                // constant variable
    int a[SIZE];                        // declare an array of size 20

    init(a, SIZE);
    print(a, SIZE);

    int n;
    cout << "\n\nEnter an integer: ";
    cin >> n;

    getIndexes(a, SIZE, n);             // print all indexes of n in the array

    cout << endl;
    return 0;
}
