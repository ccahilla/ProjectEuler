/*
Sums the even terms of the Fibonnaci sequence that are under 4 million.
 */
#include <iostream>
using namespace std;

int main() {

  int total = 0;
  int j = 1;
  int i = 1;
  for(int k = 1; k < 4000000; k = i + j ) {
    cout << k << endl;
    i = j;
    j = k;
    if(k % 2 == 0) {
      total += k;
    }
  }
  cout << "The sum of the even terms of the Fibonnaci sequence below 4 million is " << total << endl;

}
