// S. Trowbridge 2020
#include <iostream>
using namespace std;

// input data sent to parameter n
// declaration: return_type name(parameter_list);
int getNumber(int n);

int main() {
    cout << endl;

    // function call: name(arguments);
    // argument type matches single parameter type
    int number = getNumber(23);
    cout << number << endl;

    cout << endl;
    return 0;
}

// definition: return_type name(parameter_list) { function_body }
int getNumber(int n) {
    return n; // return the value of the parameter n
}
