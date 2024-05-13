// s. trowbridge 2020
#include <iostream>
using namespace std;

// interleave(123, 789)
//  interleave(12, 78)
//    interleave(1, 7) print 17 then return
//  interleave(12, 78) print 28 then return
// interleave(123, 789) print 39 then return
void interleave(long a, long b) {
    if(a<10) {                // base case: one digit left
        cout << a << b;       // 1: print last digit of a then last digit of b
        return;               // 2: end the recursive process
    }
                              // recursive task: when a has more then one digit
    interleave(a/10, b/10);   // 1: recurse to remove last digit of a and last digit of b
    cout << a%10 << b%10;     // 2: print last digit of a followed by last digit of b
}

int main() {
    cout << endl;

    long a, b;
    cout << "Enter two positive integers with an equivalent number of digits: ";
    cin >> a >> b;

    interleave(a, b);

    cout << endl;
    return 0;
}
