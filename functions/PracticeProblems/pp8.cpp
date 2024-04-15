#include <iostream>
using namespace std;

int randBase10();

int main(){
    cout << endl;

    srand(time(NULL));

    cout << randBase10() << endl;
    
    return 0;
}
int randBase10(){
    return rand() % 10;
}