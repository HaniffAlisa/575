#include <iostream>
using namespace std;

int main(){
   
    int speed;

    cout << "Enter speed: " << endl;
    cin >> speed;
    if (speed <0 || speed >130){
        cout <<speed<< "is not a valid speed. "<< endl;
    }

        else {
            if(speed == 0){
        cout << " The car is stopped";
    }
    else if (speed <=25){}
        cout << "The car is on a side road";
}
    else if (speed >=45 && speed <= 65 ){
        cout << "“The car is on the highway";
}
    else if (speed >=26 && speed <= 44 || speed >65 ){
        cout << "“The car is speeding";
    }
    else
        cout << "is invalid";

    cout << endl;
    return 0;
}