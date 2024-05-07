#include<iostream>
using namespace std;

int main() {
    cout << endl;

    const int SIZE = 3;
    string person[SIZE] = {"Alisa", "Shaheed", "Haniff"};

    cout << person[1]<<endl;

    for(int i=0; i<SIZE; ++i) {
        cout<<person(i)<<endl;
    }


    return 0 ;
}