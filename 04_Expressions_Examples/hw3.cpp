#include <iostream>
using namespace std;


int main(){
    cout << endl;

    int n, backup;

    cout << "Enter an integer: "<<endl;
    cin >> n;
    backup = n;

    cout << n%10 << endl;
    n /= 10;    //remove lsd

    cout << n%10 << endl;
    n /= 10;
    cout << n%10 << endl;

    cout << "Original " << (backup) <<endl;

    cout << endl;
    return 0;

}