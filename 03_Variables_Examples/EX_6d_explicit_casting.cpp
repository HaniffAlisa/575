// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main()
{
    cout << "\n";

    int i = 97;
    char c = 'A';
    float f = 66.5;

    // explicit casting occurs when specified with the static_cast<>() command
    // syntax: static_cast<type to convert to>(data to convert);
    cout << static_cast<char>(i) << "\n";   // convert the value of i into a character
    cout << static_cast<char>(f) << "\n";   // convert the value of f into a character
    cout << static_cast<float>(i) << "\n";  // convert the value of i into a float
    cout << static_cast<float>(c) << "\n";  // convert the value of c into a float
    cout << static_cast<int>(f) << "\n";    // convert the value of f into an integer (data loss occurs)
    cout << static_cast<int>(c) << "\n\n";  // convert the value of c into an integer

    // combining implicit and explicit casting
    // explicitly convert value of c into an integer, then implicitly into a boolean
    bool b = static_cast<int>(c);
    cout << b << "\n";

    // explicitly convert c to int, then implicitly to float for sum, then implicitly to double to store
    double d = static_cast<int>(c) + f;
    cout << d << "\n";

    cout << "\n";
    return 0;
}
