from typing import List

def sortedSquares(nums: List):
    slowpoint = 0
    fasterpoint = len(nums) - 1
    r_point = len(nums) - 1
    results: List = [float('inf')] * len(nums) 

    while slowpoint <= fasterpoint:
        if nums[slowpoint] ** 2 > nums[fasterpoint] ** 2:
            results[r_point] = nums[slowpoint] ** 2
            r_point -= 1
            slowpoint += 1
        else:
            results[r_point] = nums[fasterpoint] ** 2
            r_point -= 1
            fasterpoint -= 1

    return results

if __name__ == "__main__":
    nums = [-23, -4, -3, 1, 2, 3, 4, 5, 9, 10, 12]
    print(sortedSquares(nums))
