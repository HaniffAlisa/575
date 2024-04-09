// S. Trowbridge 2020
#include <iostream>
using namespace std;

// function executes a code block but does not return a value
void hello();

int main() {
    cout << endl;

    // execute the function code block, where no value is returned
    hello();

    cout << endl;
    return 0;
}

// no return statement, because no value is returned
void hello() {
    cout << "Hello, world!" << endl;
}
