//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool allZero(unordered_map<char,int>&mpp){
        for(auto it:mpp){
            if(it.second>0){
                return false;
            }
        }
        return true;
    }
    
    int search(string &pat, string &txt) {
        unordered_map<char,int>mpp;
        for(int i=0;i<pat.size();i++){
            mpp[pat[i]]++;
        }
        int cnt=0;
        int l=0;
        int r=0;
        
        while(r<txt.size()){
            mpp[txt[r]]--;
            if((r-l+1)==pat.size()){
                if(allZero(mpp)){
                    cnt++;
                    
                }
                mpp[txt[l]]++;
                l++;
            }
            
            
            r++;
            
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends