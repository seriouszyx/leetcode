/*
 * @lc app=leetcode.cn id=1094 lang=java
 *
 * [1094] 拼车
 */

// @lc code=start
class Solution {
    public boolean carPooling(int[][] trips, int capacity) {
        int[] nums = new int[10001];
        Difference df = new Difference(nums);
        for (int[] trip : trips) {
            int val = trip[0];
            int i = trip[1];
            int j = trip[2] - 1;
            df.increment(i, j, val);
        }
        int[] res = df.result();
        for (int i = 0; i < nums.length; i++) {
            if (capacity < res[i])
                return false;
        }
        return true;
    }
}
class Difference {
    int[] diff;
    public Difference(int[] nums) {
        int n = nums.length;
        diff = new int[n];
        diff[0] = nums[0];
        for (int i = 1; i < n; i++) {
            diff[i] = nums[i] - nums[i - 1];
        }
    }
    public void increment(int i, int j, int val) {
        diff[i] += val;
        if (j + 1 < diff.length) {
            diff[j + 1] -= val;
        }
    }
    public int[] result() {
        int[] res = new int[diff.length];
        res[0] = diff[0];
        for (int i = 1; i < diff.length; i++) {
            res[i] = res[i - 1] + diff[i];
        }
        return res;
    }
}
// @lc code=end

