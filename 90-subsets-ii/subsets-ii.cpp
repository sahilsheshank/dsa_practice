class Solution {

public:
    set<vector<int>> st;

    void solve(vector<int>& nums, vector<int> ds, int ind) {
        if (ind >= nums.size()) {

            st.insert(ds);
            return;
        }

        ds.push_back(nums[ind]);
        solve(nums, ds, ind + 1);
        ds.pop_back();
        solve(nums, ds, ind + 1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        
        int ind = 0;
        sort(nums.begin(), nums.end());
        solve(nums, ds, ind);
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;

        return ans;
    }
};