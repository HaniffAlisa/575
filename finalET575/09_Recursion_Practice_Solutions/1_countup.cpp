// s. trowbridge 2020
#include <iostream>
using namespace std;

// countUp(5)
//  countUp(4)
//    countUp(3)
//      countUp(2)
//        countUp(1) print 1
//      countUp(2) print 2
//    countUp(3) print 3
//  countUp(4) print 4
// countUp(5) print 5
void countUp(int n) {
    if(n==1) {              // base case - when n reaches 1
        cout << n << "\n";  // 1: print n
        return;             // 2: return to stop recursive process
    }
                            // recursive task: when n is greater than 1
    countUp(n-1);           // 1: recurse to reduce n by 1
    cout << n << "\n";      // 2: print n
}

int main() {
    cout << endl;

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    countUp(n);

    cout << endl;
    return 0;
}
