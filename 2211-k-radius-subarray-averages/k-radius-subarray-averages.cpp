class Solution {
public:
    
    vector<int> getAverages(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        long long sum=0;
        // int sum=accumulate(arr.begin(),arr.begin()+l+k,0);
        vector<int>ans(nums.size(),-1);
        
        while(r<nums.size()){
            sum+=nums[r];
            if(r==l+2*k){
                int ind=(l+r)/2;
                ans[ind]=floor(sum/(r-l+1));
                sum-=nums[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};