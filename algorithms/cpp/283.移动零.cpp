/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.empty())
            return ;
        int len = nums.size();
        int i=0;
        while (i<len)
        {
            if (nums[i] == 0)
            {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                len--;
            }
            else
                i++;
        }
    }
};

