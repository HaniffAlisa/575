// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

double averageDiff(int *a, const int &SIZE) {
    double sum = 0, diff;
    for(int i=0; i<SIZE-1; ++i) {
        diff = a[i+1] - a[i];           // calculate next - current, store in diff
        if(diff < 0) { diff = -diff; }  // find absolute value of diff
        sum+=diff;                      // add diff to current sum
    }
    return sum/(SIZE-1);                // if SIZE elements, there are SIZE-1 differences
}

void init(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        a[i] = rand()%SIZE;
    }
}

void print(int *a, const int &SIZE) {
    for(int i=0; i<SIZE; ++i) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 10;
    int a[SIZE];

    init(a, SIZE);
    print(a, SIZE);

    cout << "Average Diff = " << averageDiff(a, SIZE) << endl;

    cout << endl;
    return 0;
}
