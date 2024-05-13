// s. trowbridge 2020
#include <iostream>
using namespace std;

// this function prints as it recurses
//
// nsummations(5) print 15
//  nsummations(4) print 10
//    nsummations(3) print 6
//      nsummations(2) print 3
//        nsummations(1) print 1
//      nsummations(2)
//    nsummations(3)
//  nsummations(4)
// nsummations(5)
void nsummations(int n) {
    if(n==1) {                  // base case: when n equals 1
        cout << n << "\n";      // print summation of 1
        return;                 // end the recursive process
    }
                                // recursive task: when n greater than 1
    int sum = 0;                // 1. initialize sum
    for(int i=1; i<=n; ++i) {   // 2. iterate from 1 to n inclusive
        sum += i;               // 3. sum each value of i
    }
    cout << sum << "\n";        // 4. print the summation of n
    nsummations(n-1);           // 5. recurse to reduce n by 1
}

int main() {
    cout << endl;

    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    nsummations(x);

    cout << endl;
    return 0;
}
