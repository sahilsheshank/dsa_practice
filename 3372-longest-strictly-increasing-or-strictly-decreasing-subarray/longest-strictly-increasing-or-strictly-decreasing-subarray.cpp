class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int r = 1;
        int dec = 1;
        int inc = 1;
        int maxcnt = 1;
        while (r < nums.size()) {

            if (nums[r] > nums[r - 1]) {
                while (r < nums.size() && nums[r] > nums[r - 1]) {
                    inc++;
                    r++;
                }
                maxcnt=max(inc,maxcnt);
                inc=1;
            }

            else if (nums[r] < nums[r - 1]) {
                while (r < nums.size() && nums[r] < nums[r - 1]) {
                    dec++;
                    r++;
                }
                maxcnt=max(dec,maxcnt);
                dec=1;
            }
            else{
                r++;
            }
        }
        return maxcnt;
    }
};