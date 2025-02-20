class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0;
    
        while(l<nums.size()-1){
            int r=l+1;
            while(r<=l+k && r<nums.size()){
                if(nums[r]==nums[l]){
                    return true;
                }
                else r++;
            }
            l++;
        }
        
        return false;
    }
};