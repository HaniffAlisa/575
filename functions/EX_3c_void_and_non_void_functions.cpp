// S. Trowbridge 2020
#include <iostream>
using namespace std;

// void functions execute code but return nothing
void hello() {
    cout << "Hello" << endl;
}
void goodbye(string name) {
    cout << "Goodbye " << name << ".\n";
}

// non-void functions execute code and return a value
string getName() {
    string name;
    cout << "What is your name? ";
    cin >> name;
    return name; // return a string
}

int main() {
    cout << endl;

    hello();
    string person = getName();  // store the return value
    goodbye(person);
    cout << endl;

    hello();
    goodbye( getName() );       // use the return value as an argument
    cout << endl;

    return 0;
}
