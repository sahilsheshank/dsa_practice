//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int solve(int i,int j,vector<vector<int>>&grid,int m,int n){
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(i>=m || j>=n) return 0;
        if(grid[i][j]!=-1) return grid[i][j];
        return grid[i][j]=solve(i+1,j,grid,m,n)+solve(i,j+1,grid,m,n);
    }
    int numberOfPaths(int m, int n) {
        vector<vector<int>>grid(m,vector<int>(n,-1));
        
        return solve(0,0,grid,m,n);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout << ob.numberOfPaths(m, n) << endl;
        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends