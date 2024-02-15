// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    cout << "\nRandom sequence:" << "\n";
    cout << rand() << " ";
    cout << rand() << " ";
    cout << rand() << "\n\n";

    cout << "\nRandom sequence between 0 and 10:" << "\n";
    cout << rand() % 11 << " ";
    cout << rand() % 11 << " ";
    cout << rand() % 11 << "\n\n";

    cout << "\nRandom sequence between 0 and 100:" << "\n";
    srand(1);
    cout << rand() % 101 << " ";
    cout << rand() % 101 << " ";
    cout << rand() % 101 << "\n\n";

    cout << "\nRandom sequence between 0 and 100:" << "\n";
    srand(1);
    cout << rand() % 101 << " ";
    cout << rand() % 101 << " ";
    cout << rand() % 101 << "\n\n";

    cout << "\n";
    return 0;
}
