/*
  Find the smallest number divisible by all numbers 1 - 20
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int answer = 0;
  for (int i = 21;  ; i++) {
    for (int j = 2; j <= 20; j++) {
      if (i % j != 0) {
	break;
      }
      else if(j == 20) {
	answer = i;
	break;
      }
    }
    if (answer != 0) {
      break;
    }
  }
  cout << "The answer is " << answer << endl;
}
