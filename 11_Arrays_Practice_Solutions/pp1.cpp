#include <iostream>
using namespace std;


int main() {
int const SIZE= 3;

string person[3]={"Alisa", "Lee", "Lisa"};

cout << person[1]<<endl;

for(int i=0; i<SIZE; ++i){
   cout<<person[i]<<endl;
}
    return 0;

}