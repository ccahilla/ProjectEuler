/*
Find largest prime factor of 600851475143
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> primes;
  long int d = 600851475143;
  for (long int i = 2; i < d/2 + 1; i++) {
    cout << i << endl;
    if(d % i == 0) {
      primes.push_back(i);
      d = d/i;
      i = 2;
    }
    else if(i == d/2) {
      primes.push_back(d);
    }
  }
  cout << "The primes of 600851475143 are " << endl;
  for(int j = 0; j < primes.size(); j++) {
    cout << primes[j] << endl;
  }
}
