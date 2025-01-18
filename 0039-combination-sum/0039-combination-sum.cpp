class Solution {
public:
    void solve(int ind,int target,vector<vector<int>>& ans,vector<int>& ds, vector<int>nums){
        if(ind==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
    //include
        if(target>=nums[ind]){
            ds.push_back(nums[ind]);
            
            solve(ind,target-nums[ind],ans,ds,nums);
            ds.pop_back();
        }

        
    //exclude
       
        solve(ind+1,target,ans,ds,nums);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        
        solve(0,target,ans,ds,candidates);
        return ans;
    }
};