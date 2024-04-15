#include <iostream>
using namespace std;

int square(int n);

int main(){
    cout << endl;
    
    cout << square(5) << endl;
}
int square(int n){
    return n*n;
}