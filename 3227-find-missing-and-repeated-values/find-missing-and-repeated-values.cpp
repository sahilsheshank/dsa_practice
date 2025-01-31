class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int rep=-1;
        int mis=-1;
        int n=grid.size();
        unordered_map<int,int>mpp;

        for(int i=1;i<=n*n;i++){
            mpp[i]=0;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                mpp[grid[i][j]]++;
                if(mpp[grid[i][j]]==2){
                    rep=grid[i][j];
                }
            }
        }
        for(auto it:mpp){
            if(it.second==0){
                mis=it.first;
                break;
            }
        }
        return {rep,mis};

    }
};