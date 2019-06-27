/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.empty())
            return false;
        sort(nums.begin(), nums.end());
        for (int i=1; i<nums.size(); i++)
        {
            if (nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};

