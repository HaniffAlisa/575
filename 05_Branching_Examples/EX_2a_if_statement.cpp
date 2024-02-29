// S. Trowbridge 2022
#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int x, y;

    cout << "Enter x and y: ";
    cin >> x >> y;

    cout << "X assigned to " << x << endl;
    cout << "Y assigned to " << y << endl << endl;


    if(x > y) {                   // if the condition is true, run the codeblock
        cout << "X > Y" << endl;
    }

    if(x > 0) {
        cout << "X > 0" << endl;
    }

    if(x == y) {
        cout << "X == Y" << endl;
    }

    if(y > 10) {
        cout << "Y > 10" << endl;
    }

    cout << "\nThis line of code always prints" << endl;

    cout << endl;
    return 0;
}
