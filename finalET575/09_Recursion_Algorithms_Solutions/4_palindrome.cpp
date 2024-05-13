// s. trowbridge 2020
#include <iostream>
using namespace std;

// palindrome(kayak) s[0] == s[4]
//  palindrome(aya) s[0] == s[2]
//    palindrome(y) return true
//  palindrome(aya) return true
// palindrome(kayak) return true
bool palindrome(string s) {
    int len = s.length();                         // store length (less function calls)
    if(len<2) {                                   // base case: (if string is out of characters to check)
        return true;                              // no bad letters found, return true
    }
                                                  // recursive task
    if(s[0] == s[len-1]) {                        // if first letter == last letter
        return palindrome( s.substr(1, len-2) );  // continue to recurse on a smaller string (remove first/last letters)
    }
    return false;                                 // if letters dont match return false
}

int main() {
    cout << endl;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if( palindrome(s) ) {
        cout << s << " is a palindrome" << "\n";
    } else {
        cout << s << " is NOT a palindrome" << "\n";
    }

    cout << endl;
    return 0;
}
