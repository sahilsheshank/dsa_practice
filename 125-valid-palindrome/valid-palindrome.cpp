class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                temp+=tolower(s[i]);
            }
            else continue;
        }
        int i=0;int j=temp.size()-1;
        while(i<=j){
            if(temp[i]!=temp[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};