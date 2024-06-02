class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long int start = 1 ;
        long long int end = x ;
        
        if(x == 1){
            return 1 ;
        }
        
        long long int mid = (start + end)/2 ;
        
        while(start <= end){
            if(mid*mid == x || ((mid + 1)*(mid + 1) > x && mid*mid < x)){
                return mid ;
            }
            else if(mid*mid >= x){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
        }
        return -1 ;
    }
};