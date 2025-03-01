//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // int neg(vector<int>& arr,int l,int r){
    //     int i=l;
    //     int j=r;
    //     for(int p=i;p<=j;p++){
    //         if(arr[p]<0){
    //             return arr[p];
    //         }
    //     }
    //     return 0;
    // }
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        vector<int>ans;
        queue<int>q;
        int l=0;
        int r=0;

        while(r<arr.size()){
            if(arr[r]<0) q.push(arr[r]);
            if(r-l+1==k){
                if(!q.empty()) ans.push_back(q.front());
                else ans.push_back(0);
                if(arr[l]<0){
                    q.pop();
                }
                l++;
            }
            
            r++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends