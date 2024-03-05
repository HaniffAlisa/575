#include <iostream> //example 10 on nesting
using namespace std;

int main()
{
    cout << endl;

    int x; 

    cout << "Enter an integer: " << endl;
    cin >> x;

    if(x<=0)                      
    {
        if(x <=0)  {}                                     
            cout << x << " is not valid" << endl;
    }
        if (18%x == 0 ){
            cout << x << " is a factor of 18" << endl;
        }
        else {
            cout << x<< " is not a factor of 18" << endl;     
        }

    return 0;
}