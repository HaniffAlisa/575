// s. trowbridge 2020
#include <iostream>
using namespace std;

// sumDigits(345)
//  sumDigits(34)
//    sumDigits(3) return 3
//  sumDigits(34) return 3 + 4
// sumDigits(345) return 7 + 5
int sumDigits(long n) {
    if(n<10) {
        return n;
    }
    return sumDigits(n/10) + n%10;
}

int main() {
    cout << endl;

    long x;
    cout << "Enter a positive integer of at least three digits: ";
    cin >> x;

    cout << sumDigits(x) << endl;

    cout << endl;
    return 0;
}
