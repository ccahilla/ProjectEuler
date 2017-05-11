/*
  Find the first triangle number with over five hundred divisors
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int long long unsigned answer = 0;
  int long long unsigned triangle = 0;
  int divisorCount = 0;

  for(int long long unsigned i = 1; ; i++) {
    triangle = 0;
    divisorCount = 0;
    for(int long long unsigned j = 1; j <= i; j++) {
      triangle += j;
      if(i == j) {
	
	for(int long long unsigned k = 1; k <= sqrt(triangle); k++) {
	  if(triangle % k == 0) {
	    divisorCount++;
	  }
	}
	cout << "Triangle number: " << triangle << "  " << divisorCount << endl;
	if(divisorCount > 250) {
	  answer = triangle;
	  break;
	}
      }
    }
    if(answer != 0) {
      break;
    }
  }
  cout << "The 1st triangle number with over 500 divisors is " << answer << endl;

}
