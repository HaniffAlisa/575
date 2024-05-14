#include <iostream>
#include <time.h>
using namespace std;

void init(int *a, int size) {
    for(int i=0; i<size; ++i) {
        a[i] = rand()%21;
    }
}
void print(int *a, int size) {
    for(int i=0; i<size; ++i) {
        cout << a[i] << " ";
    }
}
int maxConsecutiveDiff(int *a, int size) {
    int maxDiff = 0;
    for (int i=1; i<size; ++i) {                // iterate from 2nd to last value
         int diff = a[i] - a[i-1];              // diff == current - previous (look back)
         if (diff < 0) diff = -diff;            // find abs value of diff
         if (diff > maxDiff) maxDiff = diff;    // if diff is greater than maxDiff, maxDiff == diff
     }
     return maxDiff;
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 10;
    int a[SIZE];

    init(a, SIZE);
    print(a, SIZE);

    int diff = maxConsecutiveDiff(a, SIZE);

     cout << "\nMax difference = " << diff << endl;

    cout << endl;
    return 0;
}