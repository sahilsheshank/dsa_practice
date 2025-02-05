class Solution {
public:
    int solve(int n,int m,int i,int j,vector<vector<int>>&dp ){
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(i>=m || j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j]=solve(n,m,i+1,j,dp) + solve(n,m,i,j+1,dp);

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(n,m,0,0,dp);
        
    }
};