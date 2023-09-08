#pragma once
# include <iostream>
# include <vector>
using namespace std;


int search(vector<int>& nums, int target);
int removeElement_violent(vector<int>& nums, int value);
int removeElement_fasterslowpoint(vector<int>& nums, int value);
vector<int> sortedSquares(vector<int>& nums);
int minSubArrayLen(int target, vector<int>& nums);
vector<vector<int>> generateMatrix(int n);