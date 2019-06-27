/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        for (int i=digits.size()-1; i>0; i--)
        {
            if (digits[i] != 10)
            {
                return digits;
            }
            else
            {
                digits[i] = 0;
                digits[i-1]++;
            }
        }
        if (digits[0] == 10)
        {
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        
        
        return digits;
    }
};

