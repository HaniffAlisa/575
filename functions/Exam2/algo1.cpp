
#include <iostream>
using namespace std;

string getFirstIndex(string s, char c){
    for (int i=0; i<s.length(); ++i){
        if(c == s[i])  {
            return i;
        }
    }
    return 0;
}

int main(void)  {
    cout << endl;

    char letter;
    string word;
    cout << "Enter a word and a letter: ";
    cin >> word >> letter;

    cout << getFirstIndex(word, letter) << endl;

    return 0;
}