#include <iostream>
using namespace std;
#include <time.h>

void init(int a[][3], const int &S1, const int &S2){
    for(int i=0; i<S1; ++i){
        for(int j=0; j<S2; ++j){
            a[i][j]=rand()%10;
        }
    }
}

void print(int a[][3],const int &S1, const int &S2){
     for(int i=0; i<S1; ++i){
        for(int j=0; j<S2; ++j)
        cout << a[i][j]<<" ";
    }
    cout<<endl;
}

int sumEven(int a[][3], const int &S1, const int &S2){
    int even=0;
     for(int i=0; i<S1; ++i){
        for(int j=0; j<S2; ++j)
        if(a[i][j]%2==0){
            even+=a[i][j];
        }
    }
    return even;
}
int main(){
    cout<< endl;

    srand(time(NULL));
    const int S1=3;
    const int S2=3;
    int a[S1][S2];

 init(a,S1, S2);
 print(a,S1,S2);
 int even=sumEven(a, S1,S2);

cout<<even<<endl;

    return 0;
}