class Solution {
public:
    int solve(int num){
        if(num<10){
            return num;
        }
        int sum=0;
        while(num>0){
            int digit=num%10;
            sum+=digit;
            num=num/10;
        }
        return solve(sum);

    }
    int addDigits(int num) {
        return solve(num);
    }
};