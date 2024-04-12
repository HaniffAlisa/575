#include <iostream>
using namespace std;

int square(int n);
int multiply(int x, int y);
void hello(string s);
bool isEven(int n);

int main() {
    cout << endl;
    
    cout << square(5) << "\n";              // compute 5*5
    cout << multiply(5, 6) << "\n";         // compute 5*6
    hello("John");                          // print "Hello John" (void function expression does not resolve to a value)
    cout << isEven(4) << "\n";              // 4 is even, output is 1

    cout << endl;
    return 0;
}

int square(int n) {
    return multiply(n, n);
}
int multiply(int x, int y) {
    return x*y;
}
void hello(string s) {                      // void function does not return a value, no return statement
    cout << "Hello " + s << "\n";
}
bool isEven(int n) {
    return n%2 == 0; 
}


