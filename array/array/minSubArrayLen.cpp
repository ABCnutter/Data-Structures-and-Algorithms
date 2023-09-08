#include "array_algorithm.h"


int minSubArrayLen(int target, vector<int>& nums) {
    int out_result = INT32_MAX;
    int sum = 0; 
    int i = 0; 
    int subarray_Length = 0; 
    for (int j = 0; j < nums.size(); j++) {
        sum += nums[j];
        
        while (sum >= target) {
            subarray_Length = (j - i + 1);
            out_result = out_result < subarray_Length ? out_result : subarray_Length;
            sum -= nums[i++];  // ͨ��ɾ����������ʼλ�ö�Ӧ��ֵ��ʹi��һ����������͵ĽǶ�ʵ����ʼλ�ñ仯������1����
        }
    }
    return out_result == INT32_MAX ? 0 : out_result;
}