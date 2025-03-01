//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int count(string& s,int k){
        
        unordered_map<char,int>mpp;
        int l=0;
        int r=0;
        int cnt=0;
        int distinct=0;
        while(r<s.length()){
            if(mpp[s[r]]==0) distinct++;
            mpp[s[r]]++;
            while(distinct>k){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) distinct--;
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int countSubstr(string& s, int k) {
        return count(s,k)-count(s,k-1);
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends