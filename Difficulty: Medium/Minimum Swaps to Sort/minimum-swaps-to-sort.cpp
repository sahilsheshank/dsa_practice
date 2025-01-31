//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int>& nums) {
        vector<pair<int,int>>temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back({nums[i],i});
        }
        sort(temp.begin(),temp.end());
        int swaps=0;
        for(int i=0;i<temp.size();i++){
            pair<int,int>p=temp[i];
            int val=p.first;
            int ind=p.second;
            if(ind!=i){
                swaps++;
                swap(temp[ind],temp[i]);
                i--;
            }
        }
        return swaps;
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
        Solution obj;
        cout << obj.minSwaps(arr) << endl;
    }
}

// } Driver Code Ends