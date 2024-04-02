#include <iostream>
using namespace std;

int main() {
    cout << endl;

    const int n = 3;

    for(int b=0; b<n; ++b) {          
        for(int i=0; i<n; ++i) {   
            for(int j=0; j<n; ++j)   {
            if(b%2 ==0 && j<=n-1-i) {                  
                cout << "X ";
            } else if(b%2 !=0 && j>=i){
                cout << "X ";
            }else{
                cout <<"  ";
            }
            
     cout << "\n";
    }
        }
    }
    return 0;
}