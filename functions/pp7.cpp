#include <iostream>
#include<time.h>
using namespace std;

int area(int l, int w);
int getMin(int x, int y);
int randDecimal();

int main(){
    cout << endl;
    srand(time(NULL));

    cout <<area(5,3)<<"\n";    //15
    cout<<getMin(4,6)<<"\n";        //4
    cout<<randDecimal() << "\n";    //outputs integer between 0 -9 inclusive

    cout<< endl;
    return 0;
}


int area(int l, int w){
    return l * w;
}
int getMin(int x, int y){
    return x<=y ? x:y ;
}
int randDecimal(){
    return rand() % 10;
}
