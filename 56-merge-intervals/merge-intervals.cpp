class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty())
            return {}; // Edge case: empty input

        // Sort intervals by start time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        ans.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            // Get the last interval added to ans
            vector<int>& last = ans.back();

            if (last[1] >= intervals[i][0]) {            // Overlapping case
                last[1] = max(last[1], intervals[i][1]); // Merge intervals
            } else {                                     // Non-overlapping case
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};