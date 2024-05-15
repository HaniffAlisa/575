#include <iostream>
#include<time.h>
using namespace std;

void init(int a[], int const &SIZE){
    for(int i =0; i<SIZE; ++i){
        for(int j =0; j<SIZE; ++j){
        a[3][3] = rand()%10;
        }
    }
}
void print(int a[], int const &SIZE){
    for(int i =0; i<SIZE; ++i){
        for(int j =0; j<SIZE; ++j){
        cout << a[i][i] = rand()%10;
        }
    }
}

int evenSum(int a[], int const &SIZE){
    for(int i =0; i<SIZE; ++i){
        for(int j =0; j<SIZE; ++j){
        cout << a[i][i] = rand()%10;
        }
    }
}
int main(){
    cout << endl;

    srand(time(NULL));

    const int s1 =3;
    const int s2 =3;
    int a[s1][s2];

    cout<< " Sum of evens = "<< evenSum<<endl;
}