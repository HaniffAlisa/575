#include <iostream>
using namespace std;

int getMin(int x, int y);

int main(){
    cout << endl;

    cout << getMin(4, 6) << endl;
    
    return 0;
    }
    
int getMin(int x, int y){
        if(x <= y){
            return x;
        }else {
            return y;
        }
}     
