#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int x=3;
    int y=2;
    int z=1;

    cout << ((x > y) || (y == z))<< endl;
    cout << ((y >= z) && !(x == 3))<<endl;
    cout << ((x < 4) || ((z == x) && !(x == 3))) <<endl;
    cout << endl;
    return 0;
}