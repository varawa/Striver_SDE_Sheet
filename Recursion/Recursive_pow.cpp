class Solution {
public:
    double myPow(double x, int n) {
        if(x == 0) return 0 ;
    
        if(n == 0) return 1 ;
    
        double half = myPow(x , n/2) ;
        
        if(n%2 == 0) return half*half ;
    
        if(n>0) return x*half*half ;
        
        return (1/x)*half*half ;
    }
};