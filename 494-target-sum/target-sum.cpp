class Solution {
public:
    void solve(int ind,int sum,int& cnt,vector<int>& nums,int target){
        if(ind==nums.size()){
            if(sum==target){
                cnt++;
            }
            return;
        }
        
        solve(ind+1,sum+nums[ind],cnt,nums,target);
        
        solve(ind+1,sum-nums[ind],cnt,nums,target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int cnt=0;
        solve(0,sum,cnt,nums,target);
        return cnt;
    }
};