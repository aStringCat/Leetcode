#include "../../leetcode.h"

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        unordered_map<char, int> mp;
        int ans_left = 0, ans_right = INT_MAX, left = 0, cnt = 0, need_cnt = 0;
        char c;
        for (char c : t) {
            need[c]++;
        }
        need_cnt = need.size();
        for (int right = 0; right < s.length(); right++) {
            c = s[right];
            mp[c]++;

            if (mp[c] == need[c]) {
                cnt++;
            }
            if (cnt < need_cnt) {
                continue;
            }

            while (cnt == need_cnt) {
                if (right - left < ans_right - ans_left) {
                    ans_left = left;
                    ans_right = right;
                }
                c = s[left];
                mp[c]--;
                left++;
                if (mp[c] < need[c]) {
                    cnt--;
                }
            }
        }
        return ans_right == INT_MAX ? "" : s.substr(ans_left, ans_right - ans_left + 1);
    }
};
