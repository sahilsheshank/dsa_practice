class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int wholeSum=accumulate(nums.begin(),nums.end(),0);
        int currSum=0;
        for(int i=0;i<nums.size();i++){
            if(currSum==(wholeSum-nums[i]-currSum)){
                return i;
            } 
            else{
                currSum+=nums[i];
            }
        }
        return -1;
    }
};