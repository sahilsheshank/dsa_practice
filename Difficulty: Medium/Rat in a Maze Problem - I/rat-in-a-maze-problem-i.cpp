//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void solve(int i,int j,int n,vector<vector<int>>& mat,vector<string>& ans,string ds){
        
        
        if(i<0 || j<0 || i>=n || j>=n || mat[i][j]!=1 ) return;
        
        if(i==n-1 && j==n-1){
            ans.push_back(ds);
            return;
        }
        
        mat[i][j]=-1;
        solve(i+1,j,n,mat,ans,ds+'D');
        solve(i-1,j,n,mat,ans,ds+'U');
        
        solve(i,j-1,n,mat,ans,ds+'L');
        solve(i,j+1,n,mat,ans,ds+'R');
        
        mat[i][j]=1;
        
        
        
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        int n=mat.size();
        vector<string>ans;
        if(mat[0][0]==0) return {};
        
        string ds="";
        int i=0;
        int j=0;
        solve(i,j,n,mat,ans,ds);
        return ans;
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
                
        //     }
        // }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends