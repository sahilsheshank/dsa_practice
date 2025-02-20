class Solution {
public:
    int maxVowels(string s, int k) {
        string vow="aeiou";
        

        int l=0;int r=0;
        int maxCnt=0;
        int cnt=0;
        while(r<s.length()){
            
            if(vow.find(s[r])!=string::npos){
                cnt++;
            }
            if(r-l+1==k ){
                maxCnt=max(cnt,maxCnt);
                if(vow.find(s[l])!=string::npos){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return maxCnt;
    }
};