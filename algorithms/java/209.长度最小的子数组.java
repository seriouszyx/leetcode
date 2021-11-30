/*
 * @lc app=leetcode.cn id=209 lang=java
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n = nums.length;
        int[] preSum = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            preSum[i] = preSum[i - 1] + nums[i - 1];
        }
        int res = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (preSum[i + 1] - preSum[j] >= target) {
                    int len = i - j + 1;
                    if (len < res) res = len;
                }
            }
        }
        return res == Integer.MAX_VALUE ? 0 : res;
    }
}
// @lc code=end

