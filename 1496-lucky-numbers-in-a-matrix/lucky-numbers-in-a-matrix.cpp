class Solution {
public:
    bool findMaxCol(int num,int col,vector<vector<int>>& mat){
        int i=0;
        while(i<mat.size()){
            if(mat[i][col]>num){
                return false;
            }
            i++;
        }
        return true;
    }
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>ans;
        for(int i=0;i<matrix.size();i++){
            int mini=INT_MAX; int col=-1;
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<mini){
                    mini=matrix[i][j];
                    col=j;
                }
            }
            if(findMaxCol(mini,col,matrix)){
                ans.push_back(mini);
            }
        }
        return ans;
    }
};