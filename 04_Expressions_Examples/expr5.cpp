#include <iostream>
#include <time.h>
using namespace std;


int main(){
    cout << endl;
    srand(time(NULL));

 
    cout << rand()%11 << endl;
    cout << rand()%5 +1 << endl;
    cout << rand()%7 -4 << endl;
    cout << rand()%9 +11 << endl;
    cout << rand()%3 +6 << endl;


    cout <<endl;

    return 0;
}