//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPerfectNumber(int n) {
        long sum=0;
        for(int i=1;i<sqrt(n);i++){
            if(n%i==0){
                sum+=i;
                if(n/i!=n){
                    sum+=n/i;
                }
            }
            
        }
        return sum==n;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        bool ans = ob.isPerfectNumber(N);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends