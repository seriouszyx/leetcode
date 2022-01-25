/*
 * @lc app=leetcode.cn id=34 lang=java
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
    public int[] searchRange(int[] nums, int target) {
        int leftBound = getLeftBound(nums, target);
        int rightBound = getRightBound(nums, target);
        if (leftBound == -2 || rightBound == -2) {
            return new int[]{-1, -1};
        } else if (rightBound - leftBound > 1) {
            return new int[]{leftBound + 1, rightBound - 1};
        } else {
            return new int[]{-1, -1};
        }
    }

    int getRightBound(int[] nums, int target) {
        int l = 0, r = nums.length - 1;
        int rightBound = -2;
        while (l <= r) {
            int mid = l + ((r - l) >> 1);
            if (nums[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
                rightBound = l;
            }
        }
        return rightBound;
    }

    int getLeftBound(int[] nums, int target) {
        int l = 0, r = nums.length - 1;
        int leftBound = -2;
        while (l <= r) {
            int mid = l + ((r - l) >> 1);
            if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
                leftBound = r;
            }
        }
        return leftBound;
    }
}
// @lc code=end

