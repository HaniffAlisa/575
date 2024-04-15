#include <iostream>
using namespace std;

int multiply(int x, int y);

int main(){
    cout << endl;

    cout << multiply(5, 6);

    cout << endl;
}
int multiply(int x, int y){
    return x * y;
}