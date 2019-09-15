/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2的幂
 */
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // return n > 0 && (1 << 30) % n == 0;
        return n > 0 && (n & -n) == n;
    }
};

