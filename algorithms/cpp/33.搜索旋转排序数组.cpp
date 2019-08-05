/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */
class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;

        // 找到最小值
        int l = 0, r = nums.size() - 1;
        while (l < r) 
        {
            int mid = l + r >> 1;
            if (nums[mid] <= nums.back()) r = mid;
            else l = mid + 1;
        }

        // 找到target位置
        if (target <= nums.back()) r = nums.size() - 1;
        else l = 0, r--;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] >= target) r = mid;
            else l = mid + 1;
        }

        if (nums[l] == target) return l;
        return -1;
    }
};

