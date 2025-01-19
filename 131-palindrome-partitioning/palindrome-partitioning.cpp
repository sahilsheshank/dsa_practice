class Solution {
public:
    bool isPalin(string s,int x,int y) {
        int i = x;
        int j = y;
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(vector<string> ds, vector<vector<string>>& ans, int ind,
               string& s) {
        if (ind == s.length()) {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < s.length(); i++) {
            if (isPalin(s,ind,i )) {
                ds.push_back(s.substr(ind,i-ind+1));
                solve( ds, ans, i + 1, s);
                ds.pop_back();
                
                
                
                
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        int ind = 0;
        vector<vector<string>> ans;
        solve(ds, ans, ind, s);
        return ans;
    }
};