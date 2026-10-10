#include "../../leetcode.h"

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, pre = 0, sum = 0;
        for (int num : nums) {
            sum += num;
            ans = max(ans, sum - pre);
            pre = min(pre, sum);
        }
        return ans;
    }
};
