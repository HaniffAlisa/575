#include <iostream>
using namespace std;

int main(){
    cout <<endl;

    string major;
    string first;
    string last;

    cout <<"What is your college major? ";
    getline(cin, major);                 
    
    cout <<"Enter your first name. ";
    getline(cin, first);

    cout <<"Enter your last name. ";
    getline(cin, last);

    cout<<"My name is " <<first <<" " << last <<" and my major is " <<major <<endl;

    cout<<endl;

    return 0;
}