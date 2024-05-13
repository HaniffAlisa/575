// S. Trowbridge 2020
#include <iostream>
using namespace std;

void init(char *a, int size) {
    for(int i=0; i<size; ++i) {     
        a[i] = i+'A';               
    }
}
void print(char *a, int size) {
    for(int i=0; i<size; ++i) {     
        cout << a[i] << " ";
    }  
}

int main() {
    cout << endl;

    const int SIZE = 26;
    char alphabet[SIZE];

    init(alphabet, SIZE);
    print(alphabet, SIZE);

    cout << endl;
    return 0;
}
