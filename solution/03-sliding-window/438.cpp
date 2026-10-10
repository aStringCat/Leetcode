#include "../../leetcode.h"

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size(), m = p.size();
        if (n < m) return ans;

        unordered_map<char, int> need, window;
        for (char c : p) need[c]++;

        for (int i = 0; i < m; i++) {
            window[s[i]]++;
        }

        for (int i = 0; i <= n - m; i++) {
            bool ok = true;
            for (auto& [fst, snd] : need) {
                if (window[fst] != snd) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans.push_back(i);
            if (i < n - m) {
                window[s[i]]--;
                window[s[i + m]]++;
            }
        }

        return ans;
    }
};
