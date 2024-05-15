#include <iostream>
#include<time.h>
using namespace std;

void init(int a[][5], int s1, int s2){
    for(int i=0; i<s1; ++i){
        for(int j =0; j<s2; ++j){
            a[i][j]= rand()%90 +10;
        }
    }
}

void print(int a[][5], int s1, int s2){
    for(int i=0; i<s1; ++i){
        for(int j =0; j<s2; ++j){
            cout<< a[i][j]<< " ";
        }
        cout <<endl;
    
    }
}

int rowSum(int a[][5], int size, int i){
    int sum=0;
    for(int j=0; j<size; ++j){
        sum +=a[i][j];
    }
        return sum;

}


int main(){
    cout<< endl;
    srand(time(NULL));

    const int S1 = 5;
    const int S2 = 5;
    int a[S1][S2];

    init(a,S1,S2);
    print(a, S1, S2);
    
    int r;
    cout<< "Enter a row number:" <<endl;
    cin >>r;
    int sum = rowSum(a,S2,r);

    cout<< "The sum of row: " << sum << endl;
     
    
    return 0;
}