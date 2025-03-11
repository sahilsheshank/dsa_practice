class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()==1) return 1;
        int res = 0;
        for (int i = 0; i < points.size(); i++) {
            unordered_map<double,int>mpp;
            for (int j = 0; j < points.size(); j++) {
                if(j!=i){
                    auto dx=points[j][0]-points[i][0];
                    auto dy=points[j][1]-points[i][1];
                    auto theta=atan2(dy,dx);
                    mpp[theta]++;
                    if(mpp[theta]+1 > res){
                        res=mpp[theta]+1;
                    }
                }
                
            }
            
        }
    
        return res;
    }
};