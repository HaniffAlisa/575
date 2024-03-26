#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << endl;

    int n, count =0;
    bool isPrime = true;

    cout << " Enter a value for n: " << endl;
    cin >> n ;
   
    for(int i=2 ; i<=sqrt(n); ++i)
       if(n%i == 0){
        isPrime = false;
        break;
       }

        if(isPrime == true){
            cout << n << "  prime number." << endl;
        }
            else {
                cout << n << " is not a prime number"<< endl;
            }
        
    
    return 0;
}


