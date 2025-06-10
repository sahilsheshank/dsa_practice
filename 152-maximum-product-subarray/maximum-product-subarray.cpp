class Solution {
public:
    int maxProduct(vector<int>& nums) {
        unordered_map<int,int>mpp;
        if(nums.size()==1) return nums[0];
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi) maxi=nums[i];
            int prod=nums[i];
            for(int j=i+1;j<nums.size();j++){
                prod=prod*nums[j];
                if(maxi<=prod){
                    maxi=prod;
                }
            }
            
        }  
        return maxi; 
    }
};