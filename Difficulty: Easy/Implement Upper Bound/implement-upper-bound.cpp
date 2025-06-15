// User function Template for C++
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int l=0;
        int r=arr.size()-1;
        int ub=arr.size();
        while(l<=r){
            int mid=(l+r)/2;
            
            if(target<arr[mid]){
                ub=mid;
                r=mid-1;
            }
            else{
                
                l=mid+1;
            }
        }

        return ub;
    }
};
