// (c) S. Trowbridge 2024
#include <iostream>
using namespace std;

/* while loop version */
string reverse(string s) {
    int start = 0, end = s.length()-1;      // start is the first index, end is the last index
    while(start < end) {
        char temp = s[start];               // swap values at start and end indices
        s[start] = s[end];
        s[end] = temp;
        ++start;                            // start position increases
        --end;                              // end position decreases
    }
    return s;
}

/* for loop version
string reverse(string s) {
    int len = s.length();
    for(int i=0; i<(len/2); ++i) {  //      1. iterate from start to middle of string
        char temp = s[i];           //      2. backup current value
        s[i] = s[len-i-1];          //      3. replace current value with mirror value
        s[len-i-1] = temp;          //      4. replace mirror value with original current value
    }
    return s;
}
*/

int main() {
    cout << endl;

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << reverse(str) << endl;

    cout << endl;
    return 0;
}
