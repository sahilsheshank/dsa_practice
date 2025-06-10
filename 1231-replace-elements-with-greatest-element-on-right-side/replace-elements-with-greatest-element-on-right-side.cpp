class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int lastMax=0;
        for(int i=arr.size()-1;i>=0;i--){
            if(i==arr.size()-1){
                lastMax=arr[i];
                arr[i]=-1;
            }
           else{
                int curr=arr[i];
                arr[i]=lastMax;
                lastMax=max(lastMax,curr);
           }
        }  
        return arr; 
    }
};