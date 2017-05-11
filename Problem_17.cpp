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
	long long int total = 0;
	std::vector<int> num;
	int temp;
	int value;
	
	for (int i = 1; i <= 1000; i++) {
		value = i;
		//Parse i into a vector:
		while (value != 0) {
			num.push_back(value % 10);
			value = value / 10;
		}
		/*for (int j = num.size()-1; j >= 0; j--) {
			std::cout << num[j] << " ";
		}
		std::cout << std::endl;*/
		
		switch (num.size()) {
			case 4:
				total += 11;
				break;
			case 3:
				switch (num[2]) {
					case 1:
						total += 10;
						break;
					case 2: 
						total += 10;
						break;
					case 3:
						total += 12;
						break;
					case 4:
						total += 11;
						break;
					case 5:
						total += 11;
						break;
					case 6: 
						total += 10;
						break;
					case 7:
						total += 12;
						break;
					case 8:
						total += 12;
						break;
					case 9:
						total += 11;
						break;
				}
				if (num[0] == 0 && num[1] == 0) {  //One hundred, two hundred
					break;
				}
				else {
					total += 3; //One hundred AND one
				}
			case 2:
				switch (num[1]) {
					case 1:
						if (num[0] == 0) {
							total += 3;
							for (int j = num.size()-1; j >= 0; j--) {
								std::cout << num[j] << " ";
							}
							std::cout << std::endl;
						}
						if (num[0] == 1) {
							total += 6;
						}
						if (num[0] == 2) {
							total += 6;
						}
						if (num[0] == 3) {
							total += 8;
						}
						if (num[0] == 4) {
							total += 8;
						}
						if (num[0] == 5) {
							total += 7;
						}
						if (num[0] == 6) {
							total += 7;
						}
						if (num[0] == 7) {
							total += 9;
						}
						if (num[0] == 8) {
							total += 8;
						}
						if (num[0] == 9) {
							total += 8;
						}
						break;
					case 2: 
						total += 6;
						break;
					case 3:
						total += 6;
						break;
					case 4:
						total += 5;
						break;
					case 5:
						total += 5;
						break;
					case 6: 
						total += 5;
						break;
					case 7:
						total += 7;
						break;
					case 8:
						total += 6;
						break;
					case 9:
						total += 6;
						break;
				}
				if (num[1] == 1) {
					break;
				}
				if (num[0] == 0) {
					break;
				}
			case 1:
				switch (num[0]) {
					case 1:
						total += 3;
						break;
					case 2: 
						total += 3;
						break;
					case 3:
						total += 5;
						break;
					case 4:
						total += 4;
						break;
					case 5:
						total += 4;
						break;
					case 6: 
						total += 3;
						break;
					case 7:
						total += 5;
						break;
					case 8:
						total += 5;
						break;
					case 9:
						total += 4;
						break;
				}
				break;
			
		}
		num.clear();
	}
	std::cout << "The total number of letters in 1 to 1000 is " << total << std::endl;

}