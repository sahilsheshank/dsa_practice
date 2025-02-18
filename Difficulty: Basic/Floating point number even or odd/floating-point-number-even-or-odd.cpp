//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
bool isEven(string s,int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (isEven(s,n))
           cout << "EVEN\n";
        else
           cout << "ODD\n";
        
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends


bool isEven(string s,int n)
{
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0' || s[i]=='.'){
            continue;
        }
        else if((s[i]-'0')%2==0){
            return true;
        }
        else return false;
    }
}