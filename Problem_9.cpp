/*
  Find the product abc of the Pythagorean triple (a^2 + b^2 = c^2) such that a + b + c = 1000.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int answer = 0;
  for (int a = 1; a < 1000; a++) {
    for (int b = 1; b < 1000; b++) {
      for (int c = 1; c < 1000; c++) {
	if(a*a + b*b == c*c) {
	  if(a + b + c == 1000) {
	    answer = a*b*c;
	    break;
	  }
	}
      }
      if (answer != 0) {
	break;
      }
    }
    if (answer != 0) {
      break;
    }
  }
  cout << "The product abc is " << answer << endl;
}
