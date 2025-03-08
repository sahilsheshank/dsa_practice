class Solution {
public:
    int maxConsecutiveAnswers(string a, int k) {
        int tru = 0;
        int fal = 0;
        int maxi = 0;
        int l = 0;
        int r=0;
        while (r < a.length()) {
            if (a[r] == 'T') {
                tru++;
            } else {
                fal++;
            }
            
            while (min(tru, fal) > k) {
                
                if (a[l] == 'T') {
                    tru--;
                } else {
                    fal--;
                }
                l++;

            }
            maxi = max(maxi, r - l + 1);
            r++;
        }
        return maxi;
    }
};