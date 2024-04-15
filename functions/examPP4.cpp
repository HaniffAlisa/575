#include <iostream>
using namespace std;

double divide(int x, int y);

int main(){
    cout << endl;

    cout << divide(10, 3) << endl;
    cout << endl;
    return 0;
}
double divide(int x, int y){
    return static_cast<double>(x) / y;
}