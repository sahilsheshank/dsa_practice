class Solution {
public:
    void count(vector<int>&temp,string& word){
        for(auto&ch:word){
            temp[ch-'a']++;
        }
    }
    vector<string> commonChars(vector<string>& words) {
        vector<int>alp(26,0);
        count(alp,words[0]);
        for(int i=1;i<words.size();i++){
            vector<int>temp(26,0);
            count(temp,words[i]);
            for(int k=0;k<26;k++){
                alp[k]=min(alp[k],temp[k]);
            }
        }
        
        vector<string>ans;
        for(int i=0;i<26;i++){
            
            while(alp[i]--){
                    ans.push_back(string(1,'a'+i));
            }
            
        }
        return ans;
    }
};