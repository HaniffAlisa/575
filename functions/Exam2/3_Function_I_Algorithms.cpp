// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

void validate(string s) {
    if(s[0] >= 'a' && s[0] <= 'z') {                // if first character is a letter:
        cout << s << " invalid" << "\n";            //      invalid
        return;                                     //      terminate function early
    }
    for(int i=1; i<=s.length()-2; ++i) {            //  check 2nd to 2nd to last letter
        if(s[i] >= 'a' && s[i] <= 'z') {            //  if current is a letter:
            if(s[i-1] != '!' || s[i+1] != '!') {    //      if prev and next are NOT '!':
                cout << s << " invalid" << "\n";    //          invalid
                return;                             //          terminate function early
            }
        }
    }
    cout << s << " valid" << "\n";
}

int main() {
  cout << endl;

  validate("d!==!e!f");
  validate("!d===!a!");
  validate("!a=");
  validate("a!!");

  cout << "\n";

  validate("!d!=!e!");
  validate("!f!!!==!f!");
  validate("2!a!a!");
  validate("!e!a!");

  cout << endl;
  return 0;

}
