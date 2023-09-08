#include <iostream>
#include <vector>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int r_point = nums.size() - 1;
    vector<int> result(nums.size(), 0);
    for (int slowpoint = 0, fasterpoint = nums.size() - 1; slowpoint <= fasterpoint;) {
        if (nums[slowpoint] * nums[slowpoint] > nums[fasterpoint] * nums[fasterpoint]) {
            result[r_point--] = nums[slowpoint] * nums[slowpoint];
            slowpoint++;
        }
        else
        {
            result[r_point--] = nums[fasterpoint] * nums[fasterpoint];
            fasterpoint--;
        }
    }
    return result;
}