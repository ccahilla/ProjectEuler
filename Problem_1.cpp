#include <iostream>
using namespace std;
int main() {

  int total = 0;
  for (int i = 0; i < 1000; i++) {
    if (i % 3 == 0) {
      total += i;
    }
    else if (i % 5 == 0) {
      total += i;
    }
  }
  cout << "The sum of all multiples of 3 or 5 below 1000 is " << total << endl;
}
