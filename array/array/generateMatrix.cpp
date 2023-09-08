#include "array_algorithm.h"

vector<vector<int>> generateMatrix(int n) {
    int loop_num = n / 2; // ����ѭ����Ȧ��
    int start_x = 0; // �����е���ʼλ�� 
    int start_y = 0; // �����е���ʼλ��
    int offset = 1; // ѡ�����ұ�ԭ��ƫ��
    int count = 1; // ��ֵ����
    vector<vector<int>> nums(n, vector<int>(n, 0)); // ������ά���飬ȫ��ֵΪ0

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