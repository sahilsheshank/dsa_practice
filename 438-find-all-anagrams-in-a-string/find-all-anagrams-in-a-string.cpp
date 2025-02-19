class Solution {
public:
    bool allZero(unordered_map<char,int>& mpp){
        for(auto it:mpp){
            if(it.second>0){
                return false;
            }
            
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>mpp;
        for(auto it:p){
            mpp[it]++;
        }
        vector<int>ans;
        int l=0;
        int r=0;
        while(r<s.size()){
            mpp[s[r]]--;
            if((r-l+1)==p.size()){
                if(allZero(mpp)){
                    ans.push_back(l);
                }
                mpp[s[l]]++;
                l++;
            }
            r++;
        }
        return ans;
    }
};