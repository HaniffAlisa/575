// S. Trowbridge 2020
#include <iostream>
using namespace std;

// two parameters, first int, second double, order matters
int printAndReturn(string s, int x);

int main() {
    cout << endl;

    // argument type and order must match parameter type and order
    cout << printAndReturn("Hi", 5) << "\n";

    // argument type and order must match parameter type and order
    string str = "Bye";
    int num = 10;
    cout << printAndReturn(str, num) << "\n";

    // line 20 causes a compiler error, because the arguments don't match the parameters
    cout << printAndReturn(10, "Bad Function Call") << "\n";

    cout << endl;
    return 0;
}

int printAndReturn(string s, int x) {
    cout << s << "\n";
    return x;
}
