#define ll long long
class Solution {
public:
    ll gi=0;
    vector<int>temp;
    void merge(vector<int>&nums,ll mid,ll low,ll high){
        ll left=low;
        ll right=mid+1;
        temp.clear();
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                gi+=(mid-left+1);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }

    }
    void mergeSort(vector<int>&nums,ll low,ll high){
        if(low>=high){
            return;
        }
        ll mid=(low+high)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,mid,low,high);
    }
    bool isIdealPermutation(vector<int>& nums) {
        
        ll li=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]) li++;
        }
        mergeSort(nums,0,nums.size()-1);
        return gi==li;
    }
};