def search(nums, target):
    left = 0
    right = len(nums) - 1

    while(left <= right):
        middle = left + ((right - left) // 2)
        if nums[middle] > target:
            right = middle - 1
        elif(nums[middle] < target):
            left = middle + 1
        else:
            return middle
        
nums = [1 ,2, 3, 4, 5, 6, 7, 9, 11]
target = 9
print(f"subscript of target: {search(nums, target)}")