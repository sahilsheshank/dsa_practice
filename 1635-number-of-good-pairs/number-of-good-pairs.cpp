class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(mpp.count(nums[i])){
                cnt+=mpp[nums[i]];
            }
            
            mpp[nums[i]]++;
            
        }
        return cnt;
    }
};