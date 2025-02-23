//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S, int Q, int index[], string sources[], string targets[]) {
    string ans = "";
    unordered_map<int, pair<string, string>> mp; // Stores {index -> {source, target}}

    for (int i = 0; i < Q; i++) {
        mp[index[i]] = {sources[i], targets[i]};
    }

    int i = 0;
    while (i < S.length()) {
        if (mp.count(i)) { // Check if there is a replacement at index i
            string source = mp[i].first;
            string target = mp[i].second;

            // Ensure the substring in S matches `source`
            if (S.substr(i, source.length()) == source) {
                ans += target; // Replace with target
                i += source.length(); // Move ahead by length of replaced substring
                continue;
            }
        }
        ans += S[i]; // If no replacement, append original character
        i++;
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends