#include "../../leetcode.h"

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int first = 0; first < n - 2; ++first) {
            if (nums[first] > 0) break;
            if (first && nums[first] == nums[first - 1]) continue;
            int second = first + 1, third = n - 1;
            while (second < third) {
                int sum = nums[first] + nums[second] + nums[third];
                if (sum < 0) {
                    ++second;
                } else if (sum > 0) {
                    --third;
                } else {
                    ans.push_back({nums[first], nums[second], nums[third]});
                    while (second < third && nums[second] == nums[second + 1]) ++second;
                    while (second < third && nums[third] == nums[third - 1]) --third;
                    ++second;
                    --third;
                }
            }
        }
        return ans;
    }
};
