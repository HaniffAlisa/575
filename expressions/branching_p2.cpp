#include <iostream>
using namespace std;

int main(){
    cout <<endl; 

    int age; 

    cout<< "Enter your age: ";
    cin >> age;

    if (age <0 || age >110){
        cout << "is not valid"<< endl;
    }else {
        if (age <= 3 ){
            cout << "You are a baby"<< endl;
        }
        else if (age <13 ){
            cout << "You are a child"<< endl;
        }
        else if (age <21 ){
            cout << "You are a teenager"<< endl;
        }
        else if (age < 110){
            cout << "You are a adult"<< endl;
        }cout<< endl; 
    }
    return 0;
}