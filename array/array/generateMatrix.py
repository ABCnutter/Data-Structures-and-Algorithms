import numpy as np

def generateMatrix(n: int):
    loop_nums = int(n // 2)
    start_x = 0
    start_y = 0
    offset = 1
    count = 1
    # nums = np.random.randint(low=0, high=1, size=(n , n))
    nums = [[0] * n for _ in range(n)]
    for _ in range(loop_nums):
        for i in range(start_y, n - offset):
            nums[start_x][i] = count
            count += 1
        for i in range(start_x, n - offset):
            nums[i][n - offset] = count
            count += 1
        for i in range(n - offset, start_y, -1):
            nums[n - offset][i] = count
            count += 1
        for i in range(n - offset, start_x, -1):
            nums[i][start_y] = count
            count += 1
        start_x += 1
        start_y += 1
        offset += 1
    if n % 2 == 1:
        nums[n//2][n//2] = count
    return nums


if __name__=="__main__":
    n = 3
    print(generateMatrix(n))
