class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]) || isdigit(s[i])){
                str+=s[i];
            }
        }
        int l=0;
        int r=str.length()-1;

        while(l<r){
            if(tolower(str[l])==tolower(str[r])){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};