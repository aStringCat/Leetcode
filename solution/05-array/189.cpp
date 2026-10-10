#include "../../leetcode.h"

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        int round = gcd(k, nums.size());
        for (int start = 0; start < round; start++) {
            int cur = start, pre = nums[start];
            do {
                swap(pre, nums[(cur + k) % nums.size()]);
                cur = (cur + k) % nums.size();
            } while (cur != start);
        }
    }
};
