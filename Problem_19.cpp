/*
 *  Problem_18.cpp
 *  
 *
 *  Created by Craig Cahillane on 9/9/14
 *
 *  Count all Sundays that are also firsts of the month between 1901 and 2000.
 */

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main() {

  int total = 0;
  int start = 1;
  
  start = start + 365 % 7;
  if(start == 0) {
    total++;
  }

  for(int i = 1901; i <= 2000; i++) {
    for(int j = 1; j <= 12; j++) {
      //printf("start = %d", start);
      if(start == 0) {  //See if current day works
	total++;
      }
      // Move on to the next month
      if(j == 2) {
	if(i % 400 == 0) {
	  printf("!!! Super leapyear i = %d !!!\n", i);
	  start = start + 29 % 7;
	}
	else if (i % 100 == 0) {
	  printf("!! Super non-leapyear i = %d !!\n", i);
	  start = start + 28 % 7;
	}
	else if (i % 4 == 0) {
	  printf("%d was a leapyear\n", i);
	  start = start + 29 % 7;
	}
	else {
	  printf("%d was not a leapyear\n", i);
	  start = start + 28 % 7;
	}
      }
      else if(j == 9 || j == 4 || j == 6 || j == 11) {
	//printf("j = %d", j);
	start = start + 30 % 7;
      }
      else {
	//printf("j = %d", j);
	start = start + 31 % 7;
      }
      if (start >= 7) {
	start = start - 7;
      }
    }  
  }
  printf("The total number of Sundays that fell on the first of a month in the twentieth century was %d\n\n",total);
}
