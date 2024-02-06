// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main () {
    cout << "\n";

    int x;                        // x contains garbage (unpredictable value)
    cout << "x: " << x << "\n";

    int y = x + 1;                // y + garbage equals garbage
    cout << "y: " << y << "\n";

    cout << "\n";
    return 0;
}
