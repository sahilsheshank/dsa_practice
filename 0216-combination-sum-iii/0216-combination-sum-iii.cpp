class Solution {
public:
    void solve(vector<vector<int>>& ans,vector<int>& ds,int len,int reqSum,int ind){
        if(ds.size()==len){
            if(reqSum==0){
                ans.push_back(ds);
            }
            return;

        }
        if(reqSum<0 || ind>reqSum || ind>9 ){
            return;
        }
        ds.push_back(ind);
        solve(ans,ds,len,reqSum-ind,ind+1);
        ds.pop_back();
        solve(ans,ds,len,reqSum,ind+1);

        
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        int sum=0;
        solve(ans,ds,k,n,1);
        return ans;

    }
};