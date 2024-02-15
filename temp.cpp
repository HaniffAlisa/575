#include <iostream>
using namespace std;

int main(){
    cout <<endl;

    int x, y ;
    cout << "Enter an intrger x: ";
    cin >> x;

    cout << "Enter an integer y: ";
    cin >> y;

    string s = "Hello"; 
//1. write a c++ statement to print one value in the range 0-19 inclusive using the input value x
    cout << (x % 20) <<endl;   //inclusive 23 24 25 26 27 28 (max-min +1)
 //2.    
    cout << (x % 6 + 23) <<endl;

    cout << (static_cast<float>(x)/y) << "\n";  //conversion first then do the division

    // #4 'e' character for string hello

    cout << (x % 5 -3) << endl;





    cout <<endl;
    return 0;
}