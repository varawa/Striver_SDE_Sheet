class Solution {
public:
    const int MOD = 1e9 + 7;

    long long int power(long long times , int n){
        
        if(times == 0)  return 1 ;
        if(times == 1)  return n ;

        long long int e = power(times/2 , n) ;

        if(times%2 == 0)    
            return (e*e)%MOD ;
        else
            return (n*e*e)%MOD ;
    }
    
    int countGoodNumbers(long long n) {
        long long int o = power(n/2 , 4)%MOD ;
        long long int e = power((n+1)/2 , 5)%MOD ;

        long long int ans = (o*e)%MOD ;

        return ans%MOD ; 

    }

    
};