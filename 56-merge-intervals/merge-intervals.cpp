class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if (intervals.empty())
            return {}; // Edge case: empty input

        // Sort intervals by start time
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i=0;i<n;i++){
            
            vector<int>& last=ans.back();
            if((last[1])>=(intervals[i][0])){
                last[1]=max(last[1],intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
        
    }
};