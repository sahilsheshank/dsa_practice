class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt=0;
        int len=1;

        if(arr.size()==1) return 1;
        for(int i=0;i<arr.size();i++){
            if (arr[i + 1] == arr[i]) {
                continue; 
            }
            else if (arr[i + 1] - arr[i] == 1) {
                len++;
            } else {
                len = 1;
            }
            cnt=max(len,cnt);

        }
        
        return cnt;
        
    }
};