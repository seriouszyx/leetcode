/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > result;
        if (nums.empty() || nums.size() < 3)
            return result;
        for (int k=0; k<nums.size(); k++) {
            if (nums[k] > 0)
                break;
            if (k != 0 && nums[k] == nums[k-1])
                continue;
            int target = -nums[k];
            int i = k + 1, j = nums.size() -1;
            while (i < j) {
                if (nums[i] + nums[j] == target) {
                    result.push_back({nums[k], nums[i], nums[j]});
                    while (i < j && nums[i] == nums[i+1])
                        i++;
                    while (i < j && nums[j] == nums[j-1])
                        j--;
                    i++;
                    j--;
                } else if (nums[i] + nums[j] < target) 
                    i++;
                else
                    j--;
            }
            
        }
        
        return result;
    }
};

