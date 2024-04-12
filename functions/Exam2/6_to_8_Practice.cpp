#include <iostream>
#include <time.h>
using namespace std;

int area(int length, int width);
int getMin(int x, int y);
int randBase10();

int main() {
    cout << endl;
    srand(time(NULL));

    cout << area(5, 3) << "\n";             // 15
    cout << getMin(4, 6) << "\n";           // 4
    cout << randBase10() << "\n";           // this will output an integer between 0 and 9 inclusive

    cout << endl;
    return 0;
}

int area(int length, int width) {
    return length * width;
}
int getMin(int x, int y) {
    if(x <= y) {
        return x;
    } else {
        return y;
    }
}
int randBase10() {
    return rand() % 10;
}




