#include "../../leetcode.h"

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        mp.reserve(strs.size());

        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            mp[key].emplace_back(str);
        }

        vector<vector<string>> ans;
        ans.reserve(mp.size());

        for (auto& [key, group] : mp) {
            ans.emplace_back(std::move(group));
        }

        return ans;
    }
};
