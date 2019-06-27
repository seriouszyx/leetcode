/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.empty() || (k%=nums.size()) == 0)
            return;
        int n = nums.size()-k;
        reverse(nums.begin(), nums.begin()+n);
        reverse(nums.begin()+n, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

