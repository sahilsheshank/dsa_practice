class Solution {
public:
    int reverseNum(int n){
        int ans=0;
        while(n>0){
            int dig=n%10;
            ans=ans*10+dig;
            n=n/10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            int rev=reverseNum(nums[i]);
            st.insert(nums[i]);
            st.insert(rev);
        }
        return st.size();
    }
};