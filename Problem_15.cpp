/*
  Find all the paths to the end, without backtracking, on a 20x20 grid
  (AKA find the middle number of the 40th row of Pascal's triangle)
  Note: To find the middle number, first multiply the number by 2, then by 1*m/nwhere n = m+1 and m = row / 2 
 */
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  
  long long int answer = 0;
  long long int middle = 1;
  for(int i = 1; i <= 39; i++) {
    if(i%2 == 1) {
      middle = middle*2;
    }
    else {
      long double m = (double) i/2;
      middle = middle*(2*m+1.0)/(m+1.0);
    }
    cout << "Pascal's triangle middle " << middle << endl;
  }
  answer = middle;
  cout << "There are " << answer << " possible routes through a 20x20 grid" << endl;
}
