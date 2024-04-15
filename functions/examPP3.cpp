#include <iostream>
using namespace std;

void hello(string s);

int main(){
    cout << endl;

    hello("John");
    cout << endl;
    return 0;
}
void hello(string s){
    cout << "Hello " << s << endl;
}