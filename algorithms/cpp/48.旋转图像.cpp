/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix.size();
        for (int i=0; i<len; i++)
        {
            for (int j=i+1; j<len; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

