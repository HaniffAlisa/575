#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string s;
    cout << " Enter a string "<< endl;
    getline(cin,s);

    cout <<s <<endl;
    string r=s;
    
    for( int i =0 ;  i<=s.length(); ++i)
        if (s.length()>0){
            r[i] = s[s.length()-1-i];

        }
    cout <<s << " in reverse is " << r << endl;
    return 0;
}