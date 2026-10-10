#include "../../leetcode.h"

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        ranges::sort(intervals.begin(),intervals.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0];
        });
        int left = intervals[0][0], right = intervals[0][1];
        vector<vector<int>> ans;
        for (int i = 1; i < intervals.size(); i++) {
            if (right >= intervals[i][0]) {
                right = max(intervals[i][1], right);
            } else {
                ans.push_back({left, right});
                left = intervals[i][0];
                right = intervals[i][1];
            }
        }
        ans.push_back({left, right});
        return ans;
    }
};
