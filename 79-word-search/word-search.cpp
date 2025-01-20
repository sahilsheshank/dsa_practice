class Solution {
public:
    bool solve(int i,int j,int ind,vector<vector<char>>& board, string word,int n,int m){
        if(ind==word.length()){
            return true;
        }
        if(i>=n || j>=m || j<0 || i<0 || board[i][j]!=word[ind]){
            return false;
        }
        char ch=board[i][j];
        board[i][j]='#';
        bool op1=solve(i+1,j,ind+1,board,word,n,m);
        bool op2=solve(i,j+1,ind+1,board,word,n,m);
        bool op3=solve(i-1,j,ind+1,board,word,n,m);
        bool op4=solve(i,j-1,ind+1,board,word,n,m);
        board[i][j]=ch;
        return op1||op2||op3||op4;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int ind=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(solve(i,j,ind,board,word,n,m)) return true;
                }
            }
        }
        return false;
    }
};