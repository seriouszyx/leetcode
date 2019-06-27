/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m;
        for(char c : s)
            ++m[c];
        for (char c : t)
            --m[c];
        
        for (char c : t)
            if (m[c] != 0)
                return false;
        for (char c : s)
            if (m[c] != 0)
                return false;
        
        return true;
    }
};

