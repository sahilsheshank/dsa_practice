class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size()>s.size()) return "";
        unordered_map<char,int>mpp;
        for(int i=0;i<t.length();i++){    
            mpp[t[i]]++;
        }
        int minWindowSize=INT_MAX;
        int l=0;
        int r=0;
        int start=0;
        int reqCnt=t.length();
        while(r<s.length()){
            if(mpp[s[r]]>0){ 
                reqCnt--;                
            }
            mpp[s[r]]--;
            while(reqCnt==0){
                if(minWindowSize>r-l+1){
                    minWindowSize=r-l+1;
                    start=l;
                }
                
                mpp[s[l]]++;
                if(mpp[s[l]]>0){
                    reqCnt++;
                }
                l++;
            }
            r++;
        }
        return minWindowSize==INT_MAX?"":s.substr(start,minWindowSize);
    }
};