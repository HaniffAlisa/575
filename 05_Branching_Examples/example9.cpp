#include <iostream>
using namespace std;

int main(){
    cout << endl;

    bool goMovies, goDinner;


    cout << "Do you wish to go to the movies (1/0)? " << endl;
    cin >> goMovies;

    cout <<"Do you wish to go to dinner (1/0)? " << endl;
    cin >> goDinner;

    if (goMovies == false && goDinner ==false){
        cout << "You must do something" << endl;
    }
    else if(goMovies == true && goDinner == true) {
        cout << "you cannot do both" << endl;
    } 
    else if(goMovies == true ) {
        cout << "You are going to the movies" << endl;
    }
    else {
        cout <<"You are going to dinner."<< endl; 
    }
    return 0; }
