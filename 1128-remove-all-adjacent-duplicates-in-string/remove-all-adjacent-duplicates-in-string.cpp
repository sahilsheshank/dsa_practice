class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }
            else {while(!st.empty() && st.top()==s[i]){
                st.pop();
            }}
            
        }
        string str="";
        while(!st.empty()){
            str=st.top()+str;
            st.pop();
        }
        return str;
    }
};