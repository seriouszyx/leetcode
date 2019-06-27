/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */
class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        int i = 0, j = len-1;
        while (i < j)
        {
            while (!((s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z') || (s[i]>='0'&&s[i]<='9')))
            {
                i++;
            }
            while (!((s[j]>='A'&&s[j]<='Z') || (s[j]>='a'&&s[j]<='z') || (s[j]>='0'&&s[j]<='9')))
            {
                j--;
            }
            
            if (i > j)
                break;

            if ((s[i]>='0'&&s[i]<='9') || (s[j]>='0'&&s[j]<='9'))
            {
                if (s[i] != s[j])
                    return false;
            }
            else if (s[i] != s[j] && s[i]+'a'-'A' != s[j] && s[i]-'a'+'A' != s[j])
                return false;
            
            i++, j--;
        }
        
        return true;
    }
};

