// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

int getFirstIndex(string s, char c) {
    for(int i=0; i<s.length(); ++i) {   // 1. iterate from start to end of string
        if(c == s[i]) {                 //    2. if c is the current letter of the string
            return i;                   //       return the current index (function terminates early, return works like a break for functions)
        }
    }
    return -1;                          // 3. since c is not found in the string, return -1
}

int main() {
    cout << endl;

    char letter;
    string word;
    cout << "Enter a word and a letter: ";
    cin >> word >> letter;

    cout << getFirstIndex(word, letter) << endl;

    cout << endl;
    return 0;
}
