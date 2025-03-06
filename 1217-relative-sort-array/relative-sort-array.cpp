class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mpp;
        for (int i = 0; i < arr1.size(); i++) {
            mpp[arr1[i]]++;
        }
        vector<int> ans;
        for (int i = 0; i < arr2.size(); i++) {
            if (mpp.count(arr2[i])) {
                while (mpp[arr2[i]] != 0) {
                    ans.push_back(arr2[i]);
                    mpp[arr2[i]]--;
                }
                mpp.erase(arr2[i]);
            }
            
        }
        arr1.clear();
        for (auto it : mpp) {
            if (it.second > 0) {
                while (it.second != 0) {
                    arr1.push_back(it.first);
                    it.second--;
                }
            }
        }
        sort(arr1.begin(), arr1.end());
        for (auto it : arr1) {
            ans.push_back(it);
        }
        return ans;
    }
};