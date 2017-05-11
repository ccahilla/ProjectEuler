/*
  Find the 10001st prime
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int answer = 0;
  int primecount = 0;

  for(int i = 2; ; i++) {
    for(int j = 2; j <= i; j++) {
      if(i != j && i % j == 0) {
	break;
      }
      else if(i == j) {
	primecount++;
	cout << "Prime count: " << primecount << "  " << i << endl;
	break;
      }      
    }
    if (primecount == 10001) {
      answer = i;
      break;
    }
  }
  cout << "The 10001st prime is " << answer << endl;
}
