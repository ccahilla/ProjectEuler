//
//  Problem_23.cpp
//  
//
//  Created by Craig Cahillane on 12/23/14.
//
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main() {
    int total = 0;
    int limit = 28123;
    vector<int> divisorSums(limit, 0);
    vector<int> abundant;
    vector<int> abundantSums;
    
    for (int i = 1; i <= limit; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {  //If j divides i perfectly
                divisorSums[i-1] += j;
            }
        }
    }
    
    cout << "Hello" << endl;
    for (int ii = 1; ii <= limit; ii++) {
        if (divisorSums[ii-1] > ii) {
            abundant.push_back(ii);
        }
    }
    
    cout << "Hello2" << endl;
    cout << abundant.size() << endl;
    cout << abundant[0] << endl;
    cout << abundant[1] << endl;
    
    for (int l = 1; l <= abundant.size(); l++) {
        for (int m = 1; m <= l; m++) {
            abundantSums.push_back(abundant[l-1] + abundant[m-1]);
        }
    }
    
    
    int check = 0;
    for (int k = 1; k <= limit; k++) {
        for (int n = 1; n <= abundantSums.size(); n++) {
            if (abundantSums[n-1] == k) {
                check = 1;
                break;
            }
        }
        if (check == 0) {
            total += k;
        }
        else {
            check = 0;
        }
    }
    
    cout << "The sum total of all numbers that are not the sum of two abundant numbers is " << total << endl;
    
}
