#include <iostream>
using namespace std;

int main(){

    int x = 5, y = 6, z = 7; 

    cout << "Given x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "X\t" << "Y\t" << "Z\t" << endl;

    cout << "---\t" << "---\t" << "---\t" << endl; 

    cout << (x++) << "\t" << (y +=2) << "\t" << (z -=1) << endl; 
    cout << (x++) << "\t" << (y +=2) << "\t" << (z -=1) << endl;
    cout << (x++) << "\t" << (y +=2) << "\t" << (z -=1) << endl;
    cout << (x++) << "\t" << (y +=2) << "\t" << (z -=1) << endl;
    cout << (x++) << "\t" << (y +=2) << "\t" << (z -=1) << endl;


    cout<<endl;
    return 0;
}