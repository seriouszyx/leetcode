/*
 * @lc app=leetcode.cn id=69 lang=java
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
    public int mySqrt(int x) {
        int l = 0, r = x;
        while (l <= r) {
            int mid = l + ((r - l) >> 1);
            if ((long) mid * mid > x) {
                r = mid - 1;
            } else if ((long) mid * mid < x) {
                l = mid + 1;
            } else {
                return mid;
            }
        }
        return r;
    }
}
// @lc code=end

