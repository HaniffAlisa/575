#include <iostream>
using namespace std;

bool isValid(int number);

int main(){

    cout << endl;
    int n;
    cout << "enter an interger from 1 to 20 inclusive: " << endl;
    cin >> n;

    cout << endl;
    
    if(isValid(n))
        cout << "The number is in range. " << endl;
    else
        cout << "The number is not in range. " << endl;
    return 0;
}
bool isValid(int number){
    return (number >=1 && number <=20);
}