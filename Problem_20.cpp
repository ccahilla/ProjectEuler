/*
 *  Problem_17.cpp
 *  
 *
 *  Created by Craig Cahillane on 7/31/13.
 *  Copyright 2013 University of Notre Dame . All rights reserved.
 *
 */

#include <vector>
#include <cmath>
#include <iostream>

int main() {
  int temp = 0;
  std::vector<int> num;
  
  num.push_back(1);  //put 1 on the back of the vector
  for(int i = 1; i < 100; ++i) {
    for(int j = 1; j < num.size(); ++j) {
      temp = temp + i*num[j];


    }
  }

}
