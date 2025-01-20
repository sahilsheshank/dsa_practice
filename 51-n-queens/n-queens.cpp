class Solution {
public:
    bool isValid(vector<string>board,int row,int col,int n){
        int i=row;
        int j=col;
        while(j>=0){
            if(board[i][j]=='Q'){
                return false;
            }
            j--;
        }
        i=row;
        j=col;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }
        i=row;
        j=col;

        while(j>=0 && i<n){
            if(board[i][j]=='Q'){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(int n,vector<vector<string>>&ans,int col,vector<string>&board){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){
            if(isValid(board,row,col,n)){
                board[row][col]='Q';
                solve(n,ans,col+1,board);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(n,ans,0,board);
        return ans;
        
    }
};