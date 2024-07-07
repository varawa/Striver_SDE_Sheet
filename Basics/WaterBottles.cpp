class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int extra = 0 ;
        int total = 0 ;

        while(numBottles > 0){
            total += numBottles ;
            int rest = numBottles ;
            numBottles = (extra + numBottles)/numExchange ;
            extra = (extra + rest)%numExchange ;
        }

        return total ;
    }
};