/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator pos = unique(nums.begin(), nums.end());
        nums.erase(pos, nums.end());
        return nums.size();
    }
};

