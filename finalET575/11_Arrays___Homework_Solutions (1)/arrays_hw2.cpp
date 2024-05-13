// S. Trowbridge 2020
#include <iostream>
using namespace std;

void swap(char &e1, char &e2) {
    char temp = e1;
    e1 = e2;
    e2 = temp;
}
void init(char *c, int size) {
    for(int i=0; i<size; i++) {
        c[i] = static_cast<char>(i+65);
    }
}
void print(char *c, int size) {
    cout << "Original: ";
    for(int i=0; i<size; i++) {
        cout << c[i] << " ";
    }
}
void reverse(char *c, int size) {
    int left = 0;
    int right = size - 1;
    while(left < right) {
        swap(c[left], c[right]);
        left++;
        right--;
    }
}

int main() {
    cout << endl;    
    const int SIZE = 26;
    char letters[SIZE];

    init(letters, SIZE);

    cout << "Original: ";
    print(letters, SIZE);
    cout << endl;

    reverse(letters, SIZE);

    cout << "Reversed: ";
    print(letters,SIZE);

    cout << endl;
    return 0;
}
