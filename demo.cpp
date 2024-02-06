#include <iostream>
using namespace std;

int main() //main function
{

    string a = "A";
    string b = "B";

    //swap the variable of both variables
    string temp = a;   //backup first varibles
    a = b;             //replace first with second
    b = temp;           //replace second with backup(original first)

    cout << a << " " << b << endl;
   
    cout << endl;

    return 0;
}