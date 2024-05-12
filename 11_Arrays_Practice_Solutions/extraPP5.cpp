#include <iostream>
#include <time.h>
using namespace std;

int main () {
    cout << endl;

    srand(time(NULL));

    const int SIZE = 10;
    int a[SIZE];

    for(int i=0; i<SIZE; ++i){
        a[i] = rand()%SIZE;
    }

    for(int i=0; i<SIZE; ++i){
        cout << a[i] << " " ;
    }
    double sum = 0;

    for(int i=0; i<SIZE; ++i){
        sum+=a[i];
    }
    cout <<"\n" << (sum/SIZE) << " "<<endl;
    return 0;
}