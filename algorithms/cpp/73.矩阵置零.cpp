/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.size() == 0)
            return;
        if (matrix[0].size() == 0)
            return;
        vector<bool> row(matrix.size()), col(matrix[0].size());
        for (int i=0; i<matrix.size(); i++)
        {
            for (int j=0; j<matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        
        for (int i=0; i<matrix.size(); i++)
        {
            for (int j=0; j<matrix[0].size(); j++)
            {
                if (row[i] == true)
                    matrix[i][j] = 0;
                if (col[j] == true)
                    matrix[i][j] = 0;
            }
        }
        
    }
};

