class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xored = start^goal ;
        int ans = 0 ;

        while(xored > 0){
            ans += xored & 1 ;
            xored = xored >> 1 ;
        }

        return ans ;
    }
};