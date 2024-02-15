// S. Trowbridge 2022
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    cout << endl;

    cout << "\nRandom sequence between 1 and 1001 with a time based seed:" << endl;
    srand( time(NULL) );

    cout << rand() % 1001 << " ";
    cout << rand() % 1001 << " ";
    cout << rand() % 1001 << " ";
    cout << rand() % 1001 << " ";
    cout << rand() % 1001 << "\n\n";

    cout << endl;
    return 0;
}
