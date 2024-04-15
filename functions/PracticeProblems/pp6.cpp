#include <iostream>
using namespace std;

int area(int l, int w);

int main(){
    cout << endl;

    cout << area(5, 3) << endl;
    return 0;
}
int area(int l, int w){
    return l * w;
}