class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0;int r=0;
        int maxi=INT_MIN;
        int zer=0;
        int one=0;
        while(r<nums.size()){
            if(nums[r]==0) zer++;
            while(zer>1){
                

                if(nums[l]==0) zer--;
                l++;
            }
            maxi=max(maxi,r-l);
            
            r++;
            
        }
        return maxi==INT_MIN? nums.size()-1:maxi;

    }
};