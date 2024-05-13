// s. trowbridge 2020
#include <iostream>
using namespace std;

// different path depending upon the input values
// hasDigit(345, 5) return true;
//
// hasDigit(345, 4)
//    hasDigit(34, 4) return true;
// hasDigit(345, 4) return true;
//
// hasDigit(345, 3)
//    hasDigit(34, 3)
//      hasDigit(3, 3) return true;
//    hasDigit(34, 3) return true;
// hasDigit(345, 3) return true;
//
// hasDigit(345, 2)
//    hasDigit(34, 2)
//      hasDigit(3, 2) return false;
//    hasDigit(34, 3) return false;
// hasDigit(345, 3) return false;

bool hasDigit(int n, int d) { // does the number n contain the digit d?
  if(n==0) { return false; }
  if(n%10 == d) { return true; }
  return hasDigit(n/10, d);
}

int main() {
    cout << endl;

    cout << hasDigit(345, 5) << endl; // true
    cout << hasDigit(345, 4) << endl; // true
    cout << hasDigit(345, 3) << endl; // true
    cout << hasDigit(345, 2) << endl; // false

    cout << endl;
    return 0;
}
