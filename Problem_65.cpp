/*
 *  Problem_65.cpp
 *  
 *  Created by Craig Cahillane on 5/11/17.
 *
 *  Find the maximum path in the tree
 */

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
#include <stdio.h>
#include <gmp.h>
#include <gmpxx.h>
//using namespace std;

int main(int argc, char *argv[]) {

  //ifstream file;
  //vector<int> temp;
  //vector<vector<int> > tree;
  //string line;
  if(argc != 2) {
    std::cout << "program usage: " << argv[0] << " <int>" << std::endl;
    return(0);
  }
  int length = atoi(argv[1]);

  mpz_class numer;
  mpz_class denom;

  std::vector<int> contFrac;

  contFrac.push_back(2);
  for(int ii = 1; ii < length; ii++) {
	  if(ii % 3 == 2) {
	    contFrac.push_back(2*(ii/3+1));
    } else {
      contFrac.push_back(1);
    }
  }

  for(int ii = 0; ii < contFrac.size(); ++ii) {
    std::cout << "ii = " << ii << " contFrac[ii] = " << contFrac[ii] << std::endl;
  }
  
  denom = 1;
  numer = contFrac[contFrac.size()-1];
  for(int ii = contFrac.size()-2; ii >= 0; ii--) { 
    mpz_class temp = numer;
    numer = denom;
    denom = temp;
    int adder = contFrac[ii];
    numer = adder * denom + numer;
    std::cout << ii << " Fraction is " << numer << "/" << denom << std::endl;
  }

  std::cout << "Numerator is " << numer << std::endl;
  mpz_class total = 0;
  int numLength = 0;
  for(int ii = 0; numer/pow(10, ii) >= 1; ++ii) {
    ++numLength;
  }
  for(int ii = numLength-1; ii >= 0; --ii) {
    mpz_class divisor;
    mpz_pow_ui(divisor.get_mpz_t(), mpz_class(10).get_mpz_t(), ii);
    mpz_class lastDigit = numer / divisor;
    total += lastDigit;
    numer -= lastDigit * divisor;
    std::cout << "Divisor = " << divisor << "   Last Digit = " << lastDigit << std::endl;
  }
  std::cout << "Sum of numerator's digits is " << total << std::endl;
}
