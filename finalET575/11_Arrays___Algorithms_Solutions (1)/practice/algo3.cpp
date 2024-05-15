#include <iostream>
#include<time.h>
using namespace std;

void init(int a[][3], int s1, int s2){
    for(int i =0; i<s1; ++i){
        for(int j=0; j<s2; ++j){
        a[i][j] = rand()%10;
        }
    }
}
void print(int a[][3], int s1, int s2){
    for(int i =0; i<s1; ++i){
        for(int j=0; j<s2; ++j){
        cout << a[i][j] << " ";
        }
        cout<<endl;
    }
}

int evenSum(int a[][3], int s1, int s2){
    int sum =0; 
    for(int i =0; i<s1; ++i){
        for(int j=0; j<s2; ++j){
        if(a[i][j] %2 ==0){
            sum += a[i][j];
        }
    }
}
return sum;
}

int main(){
    cout << endl;

    srand(time(NULL));

    const int S1 =3;
    const int S2 =3;
    int a[S1][S2];

    init(a, S1, S2);
    print(a,S1,S2);
    int sum = evenSum(a,S1,S2);

    cout<< " Sum of evens = "<< sum<<endl;

    return 0;
}
