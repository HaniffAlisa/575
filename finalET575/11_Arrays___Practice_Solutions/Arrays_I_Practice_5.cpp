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

double sum(int *a, int size) {
    double sum = 0;                     // default a sum variable
    for(int i=0; i<size; ++i) {
        sum+=a[i];                      // sum all array values
    }
    return sum;
}

int main() {
    cout << endl;
    srand(time(NULL));                  // time based seed

    const int SIZE = 10;                // constant variable
    int a[SIZE];                        // declare an array of size 20

    init(a, SIZE);
    print(a, SIZE);

    cout << "\n" << ( sum(a, SIZE) / SIZE) << " ";  // print the average (sum / number of elements)

    cout << endl;
    return 0;
}
