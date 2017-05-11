//
//  Problem_21.cpp
//  
//
//  Created by Craig Cahillane on 12/18/14.
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
    vector<int> divisorSums(10000, 0);
    vector<int> amicable(10000, 0);
    for (int i = 1; i <= 10000; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {  //If j divides i perfectly
                divisorSums[i-1] += j;
            }
        }
    }
    int amicableNum = 0;
    for (int k = 1; k <= 10000; k++) {
        for (int l = 1; l < k; l++) {
            if (divisorSums[k-1] == l && k == divisorSums[l-1]) {
                amicable[amicableNum] = k;
                amicable[amicableNum + 1] = l;
                amicableNum += 2;
            }
        }
    }
    for (int m = 0; m < sizeof(amicable); m = m + 2) {
        cout << "Amicable pairs: " << amicable[m] << " " << amicable[m+1] << endl;
        total = total + amicable[m] + amicable[m+1];
    }
    cout << "The sum of amicable numbers under 10000 is " << total << endl;
}
