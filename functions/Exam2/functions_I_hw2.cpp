// functions_hw1 - S. Trowbridge
#include <iostream>
#include <cmath>
using namespace std;

void findPrimes(int n);

int main( ) {
    cout << endl;

    int n;
    cout << "Enter an integer value: ";
    cin >> n;

    cout << "\nPrime numbers from 1 to " << n << " inclusive:\n";
    findPrimes(n);

    cout << endl;
    return 0;
}

void findPrimes(int n) {
    for(int i=2; i<=n; ++i) {                   // exclude 1 since 1 is not prime
        bool isPrime = true;                    // reset isPrime to true for every value of i
        for(int j=2; j<=sqrt(i); ++j) {         // check if the current i is prime by seeking factors of i between 2 to sqrt of i
            if(i%j==0) {                        // if j is a factor of i, i is not a prime number, set isPrime to false and exit j loop
                isPrime = false;
                break;
            }
        }   
        if(isPrime) { cout << i << " "; }       // if isPrime is true, print i (i is a prime number)
    }
}
