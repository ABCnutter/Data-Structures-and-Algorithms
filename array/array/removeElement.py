from typing import List


# 偷懒解法
def removeElement(nums: List[int], value: int):
    nums_size = len(nums)

    for i in nums:
        if i == value:
            nums.remove(i)

    return len(nums)


# 暴力解法
def removeElement_violent(nums: List[int], value: int) -> int:
    i, nums_len = 0, len(nums)
    while i < nums_len:
        if nums[i] == value:
            for j in range(i + 1, nums_len):
                nums[j - 1] = nums[j]
            nums_len -= 1
            i -= 1
        i += 1
    return nums_len


# 双指针解法
def removeelement_fasterslowpoint(nums: List[int], value: int) -> int:
    fastpoint = 0  
    slowpoint = 0  
    nums_size = len(nums)
    while fastpoint < nums_size: 
        if nums[fastpoint] != value:
            nums[slowpoint] = nums[fastpoint]
            slowpoint += 1
        fastpoint += 1
    return slowpoint


if __name__ == '__main__':
    nums = [1, 2, 3, 4, 5, 9, 10, 12]
    value = 9
    print(f"len of nums after remove element:{removeElement(nums, value)}")
    print(f"len of nums after remove_violent element:{removeElement_violent(nums, value)}")
    print(f"len of nums after remove_fasterslowpoint element:{removeelement_fasterslowpoint(nums, value)}")
