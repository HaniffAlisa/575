#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int x;

    cout << "Enter an integer: ";
    cin >> x ;

    cout << "X assigned to " << x << endl;
    


    if(x%5==0) {             
        cout << "x is a muliple of 5" << endl;
    } 
    if(x%3==0) {                     
        cout << "x is a multiple of 3" << endl;
    }

    cout << endl;
    return 0;
}