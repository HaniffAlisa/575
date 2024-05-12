// s. trowbridge 2020
#include <iostream>
#include <time.h>
using namespace std;

void init(int a[][3], int s1, int s2) {
    for(int r=0; r<s1; ++r) {
        for(int c=0; c<s2; ++c) {
            a[r][c] = rand()%10;
        }
    }
}
void print(int a[][3], int s1, int s2) {
    for(int r=0; r<s1; ++r) {
        for(int c=0; c<s2; ++c) {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }    
}

int sumEvens(int a[][3], int s1, int s2) {
    int sum = 0;
    for(int r=0; r<s1; ++r) {
        for(int c=0; c<s2; ++c) {
            if(a[r][c]%2 == 0) {
                sum+= a[r][c];
            }
        }
    }
    return sum;
}

int main() {
    cout << endl;
    srand(time(NULL));

    const int S1 = 3;
    const int S2 = 3;    
    int a[S1][S2];

    init(a, S1, S2);
    print(a, S1, S2);

    int sum = sumEvens(a, S1, S2);
    cout << "\nSum of evens = " << sum << endl;

    cout << endl;
    return 0;
}
