from typing import List

def minSubArrayLen(target: int, nums: List[int]) -> int:
        sub_array_len = 0
        sum = 0
        i = 0
        resutle_out = float('inf')

        for j in range(0, len(nums)):
                sum += nums[j]
                while sum >= target: 
                        sub_array_len = j - i + 1
                        resutle_out = min(resutle_out, sub_array_len)
                        sum -= nums[i]
                        i += 1
        return resutle_out if resutle_out != float('inf') else 0


if __name__ == '__main__':
    nums = [2,3,1,2,4,3]
    target = 7
    print(f"len of subarray:{minSubArrayLen(target, nums)}")