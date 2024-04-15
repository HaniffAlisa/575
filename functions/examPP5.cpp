#include <iostream>
using namespace std;

void divide(int x, int y);

int main(){
    cout << endl;

    divide(10 , 3);
    cout << endl;
    return 0;
}
void divide(int x, int y){
    cout<< x/y<<endl;
}