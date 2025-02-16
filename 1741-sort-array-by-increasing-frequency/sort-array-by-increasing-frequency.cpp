class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            return mpp[a]!=mpp[b]? mpp[a]<mpp[b] : a>b;
        });
        return nums;
    }
};