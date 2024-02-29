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


    if(x > y) {                   // if the condition is true, run the if codeblock, then jump to line 23
        cout << "X > Y" << endl;
    } else {                      // otherwise run the else codeblock
        cout << "X <= Y" << endl;
    }

    cout << endl;
    return 0;
}
