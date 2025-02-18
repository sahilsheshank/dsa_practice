class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n%2!=0) return false;
        long long s=2;
        for(int i=0;i<n/2;i++){
            if(s==n) return true;
            s=s*2;
            
            if(s>n) return false;
            
        }
        return false;

        
    }
};