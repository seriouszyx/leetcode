/*
 * @lc app=leetcode.cn id=287 lang=cpp
 *
 * [287] 寻找重复数
 */
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 抽屉原理
        int n = nums.size() - 1;
        int l = 1, r = n;
        while (l < r)
        {
            int mid = l + r >> 1;
            int cnt = 0;
            for (auto x : nums)
                if (x >= l && x <= mid)
                    cnt++;
            if (cnt > mid - l + 1) r = mid;
            else l = mid + 1;
        }
        return r;
    }
};

