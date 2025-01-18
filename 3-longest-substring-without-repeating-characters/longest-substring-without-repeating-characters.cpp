class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen=0;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int>mpp;
            int r=i;
            int len=0;
            while(r<s.length() && !mpp.count(s[r])){
                len++;
                mpp[s[r]]++;
                r++;
            }
            maxLen=max(maxLen,len);

        }
        return maxLen;
    }
};
