#include <iostream>
#include <string>
using namespace std;

int main( ) {
    cout << endl;

string name ="this isQCC!";
cout << name << endl << endl;

//insert space
name.insert(7," ");
cout << name << endl << endl;

//replace t to T

name.replace(0, 1,"T");
cout << name << endl << endl;

//remove !

name.erase(11,1);
cout << name << endl << endl;

//replace QCC with ...
name.replace(8,3,"City University of New York");
cout << name << endl << endl;

//apend .
name.append(".");
cout << name << endl << endl;

cout << endl;
return 0;
}