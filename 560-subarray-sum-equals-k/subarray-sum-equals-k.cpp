class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int cnt=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int diff=sum-k;
            if(sum==k) cnt++;
            if(mpp.count(diff)){
                cnt+=mpp[diff];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};