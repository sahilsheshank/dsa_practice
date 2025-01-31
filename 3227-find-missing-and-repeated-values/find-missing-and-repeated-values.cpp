class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int rep=-1;
        int mis=-1;
        int n=grid.size();
        vector<int>hs(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                hs[grid[i][j]]++;
            }
        }
        for(int i=0;i<hs.size();i++){
            if(hs[i]==0){
                mis=i;
            }
            if(hs[i]==2){
                rep=i;
            }
        }
        return {rep,mis};

    }
};