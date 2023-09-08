#include <iostream>
#include <vector>
#include "array_algorithm.h"

using namespace std;


//暴力解算
int removeElement_violent(vector<int>& nums, int value) {
	int nums_size = nums.size();
	for (int i = 0; i < nums_size; i++) {
		if (nums[i] == value) {
			for (int j = i + 1; j < nums_size; j++) {
				nums[j - 1] = nums[j];
			}
			i--;
			nums_size--;
		}
	}
	return nums_size;
}

// 双指针解算
int removeElement_fasterslowpoint(vector<int>& nums, int value) {
	int nums_size = nums.size();
	int slowpoint = 0;
	for (int fasterpoint = 0; fasterpoint < nums_size; fasterpoint++) {
		if (nums[fasterpoint] != value) {
			nums[slowpoint++] = nums[fasterpoint];
		}
	}
	return slowpoint;
}

