/*
  Collatz Conjecture
  Find the longest sequence of numbers under one million such that:
  n even is divided by two (n/2)
  n odd is multiplied by three and has one added (3n+1)
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int long answer = 0;
  int count = 0;
  int long collatz;
  for(int long i = 1; i < 1000000; i++) {
    int j;
    collatz = i;
    for(j = 0; ; j++) {
      if(collatz == 1) {
	break;
      }
      else if(collatz % 2 == 0) {
	collatz = collatz / 2;
      }
      else if(collatz % 2 == 1) {
	collatz = 3 * collatz + 1;
      }
    }
    if(count < j) {
      count = j;
      answer = i;
    }
    cout << "Number " << i << " Count " << j << endl;
  }
  cout << "The longest sequence under one million starts at " << answer << endl;
}
