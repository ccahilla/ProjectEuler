/*
  Find the first 10 digits of the sum of 100 given 50-digit numbers
*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
  int answer = 0;
  int number_size = 50;
  int number_amount = 100;
  vector<vector<int> > a;
  vector<int> temp;

  ifstream file;
  file.open("Problem_13.txt", ifstream::in);
  if(file.good() == 1) {
    for(int i = 0; i < number_amount; i++) {
      for(int j = 0; j < number_size; j++) {
	// if (file.peek() != 10) {  //if file.get() is not a newline...
	temp.push_back(file.get()-48);
	// }
      }
      a.push_back(temp);
      temp.clear();
    }
  }
  else {
    cout << "Error, file did not open" << endl;
  }

  //Check grid
  // for(int i = 0; i < number_amount; i++) {
  //   for(int j = 0; j < number_size; j++) {
  //     cout << a[i][j];   //Check
  //   }
  //   cout << endl;
  // }

  //Now add all 100 50-digit numbers together manually. 
  int carry = 0;
  int total = 0;
  vector<int> sum;

  for(int j = number_size-1; j >= 0; j--) {  //Start at one's place
    for(int i = 0; i < number_amount; i++) {
      total += a[i][j];
    }
    total = total + carry;
    
    sum.push_back(total % 10);
    carry = total / 10;
    total = 0;
  }
  sum.push_back(carry);

  for(int i = sum.size()-1; i >= 0; i--) {
    cout << sum[i] << " ";
  }
  cout << endl;

  cout << "The first 10 digits of the sum is " << answer << endl;
}
