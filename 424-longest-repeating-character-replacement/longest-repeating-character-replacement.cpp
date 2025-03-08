class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>temp(26,0);
        int l=0;int r=0;
        int maxi=0;
        int result=0;
        while(r<s.length()){
            temp[s[r]-'A']++;
            maxi=max(maxi,temp[s[r]-'A']);
            while((r-l+1)-maxi>k){
                temp[s[l]-'A']--;
                l++;
            }
            result=max(result,r-l+1);
            r++;
        }
        return result;
        
    }
};