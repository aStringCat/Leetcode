#include "../../leetcode.h"

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, ans = 0;
        while (left < right) {
            int x = min(height[left], height[right]);
            ans = max(ans, x * (right - left));
            while (left < right && height[left] <= x) ++left;
            while (left < right && height[right] <= x) --right;
        }
        return ans;
    }
};
