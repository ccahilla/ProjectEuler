/*
  Find the 10001st prime
*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  long long unsigned int answer = 0;
  vector<int> primelist;
  primelist.push_back(2);  //Put in the first prime

  for(int i = 3; i < 2000000; i++) {
    for(int j = 0; j <= primelist.size(); j++) {
      if(j != primelist.size() && i % primelist[j] == 0) {
	break;
      }
      else if (j == primelist.size()) {
	primelist.push_back(i);
	cout << "Primes: " << primelist.back() << endl;
	break;
      }      
    }
  }
  for (int k = 0; k < primelist.size(); k++) {
    answer += primelist[k];
  }
  cout << "The sum of primes below 2000000 is " << answer << endl;
}
