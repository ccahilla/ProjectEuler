/*
  Find the difference between sum of the squares and square of the sum of the first 100 natural numbers (1-100)
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int sumOfSquares = 0;
  int squareOfSum = 0;
  int sum = 0;
  int answer = 0;
  for(int i = 1; i <= 100; i++) {
    sumOfSquares += i*i;    
    sum += i;
  }
  squareOfSum = sum*sum;
  answer = squareOfSum - sumOfSquares;
  cout << "The answer is " << answer << endl;

}
