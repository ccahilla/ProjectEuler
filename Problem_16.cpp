/*
  Find the sum of the digits to 2^1000
 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  long long int answer = 0;
  vector<int> a;
  int index = 0;

  a.push_back(1);
  for(int i = 1; i <= 1000; i++) {
    for(int j = 0; j < a.size(); j++) {
      a[j] = a[j]*2;
    }
    for(int j = 0; j < a.size()-1; j++) {
      if(a[j] >= 10) {
	a[j+1] = a[j+1]+1;
	a[j] = a[j] % 10;
      }
    }
    if(a[a.size()-1] >= 10) {
      a.push_back(1);
      a[a.size()-2] = a[a.size()-2] % 10;
    }
    cout << "Multiples of 2: ";
    for(int j = a.size()-1; j >= 0; j--) {
      cout << a[j] << " ";
    }
    cout << endl;
  }
  
  for(int i = 0; i < a.size(); i++) {
    answer += a[i];
  }
  cout << "The sum of 2^1000's digits is " << answer << endl;

}
