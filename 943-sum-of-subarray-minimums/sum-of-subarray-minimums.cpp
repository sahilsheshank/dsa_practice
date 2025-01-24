class Solution {
public:
    void findPse(vector<int>&arr,vector<int>&pse){
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[i]<arr[st.top()]){
                st.pop();
            }
            if(!st.empty()) pse[i]=st.top();
            else pse[i]=-1;

            st.push(i);
        }
    }
    void findNse(vector<int>&arr,vector<int>&nse){
        stack<int>st;
        int n=arr.size();
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
            }
            if(!st.empty()) nse[i]=st.top();
            else nse[i]=n;

            st.push(i);
        }
    }
    
    int sumSubarrayMins(vector<int>& arr) {
        int sum=0;
        int mod=(1e9)+7;
        vector<int>nse(arr.size());
        vector<int>pse(arr.size());
        findNse(arr,nse);
        findPse(arr,pse);
        for(int i=0;i<arr.size();i++){
            int ns=abs(nse[i]-i);
            int ps=abs(i-pse[i]);
            sum = (sum + (long long)arr[i] * ns * ps) % mod;
        }
        return sum;
    }
};