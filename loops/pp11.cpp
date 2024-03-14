#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int min;
    int max;
    int i= max;

    do {
        cout << "Enter a minium and maximum value ";
        cin >> min >> max;
    } while(max <= min);
    for(int i=max-1; i>min; --i){
        if(i%2 !=0){
        cout<< i<<" " ;
        }
    }
    cout << endl;
    return 0;
}