#include <iostream>
using namespace std;

int multiply(int a, int b);

int main(){
    cout << endl;

    cout<<multiply(5, 6)<<"\n";
    return 0;
}
int multiply(int a, int b){
    return a * b;
}