#include <iostream>
using namespace std;

void countDown(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    cout<< n <<endl;
    countDown(n-1);
}
int main(){
    cout<<endl;

    int n;
    cout<< "Enter an integer: "<<endl;
    cin >> n;

    countDown(n);
    return 0;
}