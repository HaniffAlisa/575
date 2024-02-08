#include <iostream>
using namespace std;

int main (){

    char c;
    cout << "Enter a lower case letter: " << endl;
    cin >> c;
 
    int i = c;
    i = i - 32;
    cout << i <<endl;


    c = i;
    cout << c << endl;


    cout << endl;
}