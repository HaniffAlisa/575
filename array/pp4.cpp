#include <iostream>
#include <time.h>
using namespace std;

int main() {
    cout << endl;
    srand(time(NULL));

    const int SIZE = 20;
    int num[SIZE];

    for(int i=0; i<SIZE; ++i){
        num[i] = rand() % SIZE;
    }
    for(int i=0; i<SIZE; ++i){
        cout << num[i]<< " ";
    }
    int n;
    cout << "Enter an integer from 0 to 19: " << endl;
    cin >> n;

    return 0;
}