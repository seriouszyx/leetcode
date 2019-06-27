/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        if (nums1.empty() || nums2.empty())
            return inter;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0, j=0;
        while (i<nums1.size() && j<nums2.size())
        {
            if (nums1[i] == nums2[j])
            {
                inter.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        
        return inter;
        
    }
};

