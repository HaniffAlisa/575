#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string s = "Hello, how are you?";
    int space = 1;

    for( int i =0 ;  i<=s.length(); ++i) {     
        if (s[i]==' '){
            ++space;
        }
        
    }

    cout<< "number of words :" << space << endl;
    return 0;
}