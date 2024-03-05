#include <iostream> //example 10 on nesting
using namespace std;

int main()
{
    cout << endl;

    int a=1, b=2; 
    cout << a << " " << b << endl << endl;        // a = 1   b = 2
                                   
    if(a<=b) {                                   //a<=b is True
        b++; 
    }  
    cout << a << " " << b << endl << endl;           //a = 1   b =3
    if(a%b==0) {                                    //a%b==0 is False
        a = ++b;     
            // b= b+1
            // a + b
    } else {    
        b = a++;        
    } 
    cout << a << " " << b << endl;              //a = 2   b =1
       
    b*=a; 
    cout << a << " " << b << endl << endl;     //a = 2   b = 2
    //this does not change a
    return 0;
}