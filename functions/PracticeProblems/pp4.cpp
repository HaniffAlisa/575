#include <iostream>
using namespace std;

void hello(string s);

int main(){
    hello("John");
    return 0;
}
void hello(string s){
    cout << "Hello " << s << endl;
}