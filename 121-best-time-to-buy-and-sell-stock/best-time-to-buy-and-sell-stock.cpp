class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]-buy>=prof){
                prof=prices[i]-buy;
            }
            else if(buy>prices[i]){
                buy=prices[i];
            }
        }
        return prof;


    }
};