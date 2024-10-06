class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)  return 0 ;
        if(x == 1)  return 1 ;

        long long int start = 0 ;
        long long int end = x - 1 ;
        long long int ans = 0 ;

        while(start <= end){
            long long int mid = start + (end - start) / 2 ;

            if(mid*mid == x)    return mid ;
            else if(mid*mid < x){
                start = mid + 1 ;
                ans = mid ;
            }   
            else    end = mid - 1 ;
        }

        return ans ;
    }
};