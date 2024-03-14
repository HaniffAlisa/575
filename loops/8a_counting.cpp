// S. Trowbridge 2024
#include <iostream>
using namespace std;

int main() {
    cout << endl;

    string word;
    cout << "Enter a word: ";
    cin >> word;

    for(int i=0; i<word.length(); ++i) { // increment i from 0 to word.length-1 inclusive, print the character at index i length times
        cout << word[i] << "\n";
    }

    cout << endl;
    return 0;
}