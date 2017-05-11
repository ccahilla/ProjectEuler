/*
Find the largest palindrome made from the product of two three digit numbers
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int answer = 0;
  int check;
  int numOfDigits = 0;
  for (int i = 999; i > 100; i--) {
    for (int j = 999; j >= i; j--) {  //while j is greater than or equal to i
      int total = i * j;              //total is the product
      
      numOfDigits = 0;
      for (int k = 1; ; k = k*10) {
	if (k > total) {
	  break;
	}
	else {
	  numOfDigits++;
	}
      }

      check = 0;
      //cout << "The number of digits is " << numOfDigits << endl;
      
      //Declare an array with numOfDigits size, and fill it with total, a[0]=ones
      int a[numOfDigits];  //set whole array with zeros
      int difference = 0;
      for (int l = numOfDigits-1; l >= 0; l--) {
	double divisor = pow(10.0, (double) l);
	int remaider = total % (int) divisor;
	
	a[l] = (total-remaider-difference)/divisor;
	difference = difference + a[l] * divisor;
      }
      
      // cout << "Check: Products: " << i << "  " << j << endl;
      // cout << "Check: Actual number: " << total << endl;
      // cout << "Check: Array: " << endl;
      // for(int m = numOfDigits-1; m >= 0; m--) {
      // 	cout << a[m] << " ";
      // }
      // cout << endl;
    
      for (int n = numOfDigits-1; n >= 0; n--) {
	if(a[n] == a[(numOfDigits-1)-n]) {
	  check++;
	}
	else {
	  break;
	}
      }
      if(check == numOfDigits) {
	if(total > answer) {
	  answer = total;
	  cout << "Solution: The biggest palindrome made by two three digits numbers is " << answer << endl;
	  cout << "The products are " << i << " and " << j << endl;
	}
      }
    }
  }


}
