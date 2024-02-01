#include <iostream>
#include <string>      
using namespace std;

int main( ) {
    cout << endl;

string s = "This is a text string.";

cout<< s.substr(0,4)<< endl;
cout<< s.substr(5,2)<< endl;
cout << s[8] << endl;
cout<< s.substr(10,4)<< endl;
cout<< s.substr(15,6)<< endl;

    cout <<endl;
    return 0;
}