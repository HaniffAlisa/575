#include <iostream>
#include<time.h>
using namespace std;

    int main(){
    srand(time(NULL));

    const int SIZE =20;
    int a[SIZE];

    for(int i=0; i<SIZE; ++i){
        a[i]=rand()%SIZE;
    }
    for(int i=0; i<SIZE; ++i){
        cout<<a[i] << " ";
    }
    
        int n;
        cout <<endl;
        cout << "Enter an integer: "<< endl;
        cin >> n;

        for(int i=0; i<SIZE; ++i){
            if(a[i]==n){
                cout << i << "  ";
            }
        }

    return 0;
}