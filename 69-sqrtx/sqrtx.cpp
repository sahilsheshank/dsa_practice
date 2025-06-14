class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        long long sq=0;
        long long l=1;long long r=x;
        while(l<=r){
            long long mid=floor((l+r)/2);
            if((mid*mid)==x){
                return mid; 
            }
            else if((mid*mid)<x){
                l=mid+1;
                sq=mid;
            }
            else{
                r=mid-1;
            }
        }
        return sq;
    }
};