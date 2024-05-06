#include <iostream>
using namespace std;

void countUp(int n) {
    if (n==1) {
        cout << n<< "\n";
        return;
    }

    countUp(n-1);
    cout << n << "\n";
    

}
int main () {
    cout <<endl;

    int n;
    cout << "Enter a positive integer: " << endl;
    cin >> n;


    cout << endl;
    countUp(n);
    return 0;
}