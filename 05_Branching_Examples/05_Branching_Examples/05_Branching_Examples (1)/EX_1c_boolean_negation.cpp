// S. Trowbridge 2020
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int w = 4, x = 3, y = 2, z = 1;
    cout << "w = 4\nx = 3\ny = 2\nz = 1\n\n";

    /* simple expressions *****************************************************/
    cout << (w > x) << endl;

    // negating a simple expression
    cout << !(w > x) << endl;

    // converting to the negated equivalent
    cout << (w <= x) << endl << endl;


    /* complex expressions ****************************************************/
    // (x < z) && (w > x)
    // F && T
    // F
    cout << ( (x < z) && (w > x) ) << endl;

    // negating a complex expression
    // !( (x < z) && (w > x) )
    // !(F && T)
    // !(F)
    // T
    cout << ( !( (x < z) && (w > x) ) ) << endl;

    // converting to the negated equivalent
    // !( (x < z) && (w > x) )
    // !(x < z) || !(w > x)
    // (x >= z) || (w <= x)
    cout << ( (x >= z) || (w <= x) ) << endl;

    cout << endl;
    return 0;
}
