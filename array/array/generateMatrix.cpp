#include "array_algorithm.h"

vector<vector<int>> generateMatrix(int n) {
    int loop_num = n / 2; // 螺旋循环的圈数
    int start_x = 0; // 矩阵行的起始位置 
    int start_y = 0; // 矩阵列的起始位置
    int offset = 1; // 选用左开右闭原则，偏移
    int count = 1; // 赋值参数
    vector<vector<int>> nums(n, vector<int>(n, 0)); // 构建二维数组，全赋值为0

    while (loop_num--)
    {
        int i, j;
        for (j = start_y; j < n - offset; j++) {
            nums[start_y][j] = count++;
        }
        for (i = start_x; i < n - offset; i++) {
            nums[i][n - offset] = count++;
        }
        for (; j > start_y; j--) {
            nums[n - offset][j] = count++;
        }
        for (; i > start_x; i--) {
            nums[i][start_x] = count++;
        }

        start_x++;
        start_y++;

        offset += 1;
    }
    if (n % 2 == 1) {
        nums[n / 2][n / 2] = count;
    }
    return nums;
}