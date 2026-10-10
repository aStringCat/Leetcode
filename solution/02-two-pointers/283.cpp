#include "../../leetcode.h"

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto left = find(nums.begin(), nums.end(), 0);
        if (left == nums.end()) return;

        for (auto right = left + 1; right != nums.end(); ++right) {
            if (*right != 0) {
                swap(*left, *right);
                ++left;
            }
        }
    }
};
