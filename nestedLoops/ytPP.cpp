#include <iostream>
using namespace std;

int main (){
    cout<<endl;

    int dim;

    cout<< "Enter a demension: "<< endl;
    cin >>dim;

    for(int i=0; i<dim; ++i){
        for(int j=0; j<dim; ++j){
            if(i==dim/2 || j==dim/2){
                cout << "X ";
            }
            else{
                cout << "O ";
            }
        } cout << "\n";
    }
cout<< endl;

    return 0;
}