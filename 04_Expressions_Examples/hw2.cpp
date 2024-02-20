#include <iostream>
using namespace std;
#include <cmath>

int main(){
    cout << endl;

   int num;

    cout << "Enter an inter: " << endl;
    cin >> num ;

    float root =sqrt(num);
    bool isPerfect = (root ==floor(root));

    cout << "Square root of " << num << "is: " << root <<endl;
    cout << "Is " << num << " a perfect square root? " << isPerfect<<endl;


    return 0; 
}