class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int l=0;
        int r=0;
        int maxi=0;
        int len=0;
        while(r<nums.size()){
            if(r<nums.size()-1 && nums[r]<nums[r+1]){
                r++;   
            }
            else{
                maxi=max(r-l+1,maxi);
                r++;
                l=r;
            }
        }
        return maxi;
    }
};