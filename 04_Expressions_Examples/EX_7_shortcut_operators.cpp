// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main() {
    cout << "\n";

    float x, y;

    x = 1.0, y = 2.0;
    cout << (x += y) << "\n";     // x+=y is equivalent to x = x + y

    x = 1.0, y = 2.0;
    cout << (x -= y) << "\n";     // x-=y is equivalent to x = x - y

    x = 1.0, y = 2.0;
    cout << (x *= y) << "\n";     // x*=y is equivalent to x = x * y

    x = 1.0, y = 2.0;
    cout << (x /= y) << "\n\n";   // x/=y is equivalent to x = x / y

    x = 10.0, y = 4.0;            // explicit cast x and y to integers before doing modulo
    int a = static_cast<int>(x);
    int b = static_cast<int>(y);
    cout << (a %= b) << "\n";     // x%=y is equivalent to x = x % y

    cout << "\n";
    return 0;
}
