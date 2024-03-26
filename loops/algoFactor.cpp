#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int n, count =0;

    cout << " Enter a value for n: " << endl;
    cin >> n ;
   
    for(int i=1 ; i<=n; ++i)
       if(n%i == 0){
        ++count;
       }

        if(count ==2){
            cout << n << "  prime number." << endl;
        }
            else {
                cout << n << " is not a prime number"<< endl;
            }
        cout << i << endl;
        
    
    return 0;
}


