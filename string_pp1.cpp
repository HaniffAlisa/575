#include <iostream>
using namespace std;

int main() //main function
{

    string word;

    cout <<"Enter a word: ";
    cin >> word;
    cout << word <<endl;
    cout << endl;

    char temp = word[0];   //backup first varibles
    word[0] = word[word.length()-1];           //replace first with second
    word[word.length()-1] = temp;   //replace second with backup(original first)

    cout << word <<endl;

    return 0;
}