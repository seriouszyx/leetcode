/*
 * @lc app=leetcode.cn id=762 lang=cpp
 *
 * [762] 二进制表示中质数个计算置位
 */
class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        unordered_set<int> primes({2, 3, 5, 7, 11, 13, 17, 19});
        int res = 0;
        for (int i = L; i <= R; i++) 
        {
            int s = 0;
            for (int k = i; k; k >>= 1) s+= k & 1;
            if (primes.count(s))
                res++;
        }
        return res;
    }
};

