/*
 *  Problem_18.cpp
 *  
 *
 *  Created by Craig Cahillane on 8/1/13.
 *  
 *  Modified starting 8/29/14
 *
 *  Find the maximum path in the tree
 */

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main() {
  ifstream file;
  vector<int> temp;
  vector<vector<int> > tree;
  string line;
  int length = 100;

  file.open("Problem_67_triangle.txt");
  if(file.good()) {
    for(int i = 0; i < length; i++) {
      for(int j = 0; j <= i; j++) {
	int n;
	file >> n;
	temp.push_back(n);
	//printf("%d ",n);
      }
      //printf("\n");
      tree.push_back(temp);
      temp.clear();
    }
    file.close();
  }

  for(int i = length-2; i >= 0; i--) { // -2 because we want second to last row
    for(int j = 0; j <=i; j++) {
      if(tree[i+1][j] > tree[i+1][j+1]) {
	tree[i][j] += tree[i+1][j];
      }
      else {
	tree[i][j] += tree[i+1][j+1];
      }
      //printf("%d ",tree[i][j]);
    }
    //printf("\n");
  }

int total = tree[0][0];
printf("\nThe max total through the triangle is %d\n",total);
}
