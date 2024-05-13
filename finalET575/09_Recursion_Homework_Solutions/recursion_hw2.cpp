// s. trowbridge 2020
#include <iostream>
using namespace std;

  void outputStars(int n) {
      if(n<10) {
          for(int i=0; i<n; i++) { cout << "*"; }
          cout << "\n";
          return;
      }
      outputStars(n/10);
      for(int i=0; i<(n%10); i++) { cout << "*"; }
      cout << "\n";
  }

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cout << endl;

    outputStars(number);

    cout << endl;
    return 0;
}
