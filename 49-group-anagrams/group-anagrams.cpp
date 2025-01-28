class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mpp;

        // Group strings by their sorted version
        for (string str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            mpp[sortedStr].push_back(str);
        }

        // Collect grouped anagrams
        for (auto& entry : mpp) {
            ans.push_back(entry.second);
        }

        return ans;
    }
};
