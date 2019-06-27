/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> hash;
        for (char c : s)
            ++hash[c];
        for (int i=0; i<s.size(); ++i)
        {
            if (hash[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};

