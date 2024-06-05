class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        long long int start = max(arr , n) ;
        long long int end = accumulate(arr , n) ;
        
        long long int mid = (start + end)/2 ;
        
        while(start <= end){
            
            long long int ans = check(arr , n , mid) ;
            
            if(ans > k){
                start = mid + 1 ;
            }
            else{
                end = mid - 1 ;
            }
            mid = (start + end)/2 ;
        }
        
        return start ;
    }
    
    long long int check(int arr[] ,int n , long long int unit){
        long long int sum = 0 ;
        
        long long int painter = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] + sum <= unit){
                sum += arr[i] ;
            }
            else{
                painter++ ;
                sum = arr[i] ;
            }
        }
        if(sum > 0){
            painter++ ;
        }
        return painter ;
    }
    
    long long int max(int arr[] , long long int n){
        long long int maximum = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] > maximum){
                maximum = arr[i] ;
            }
        }
        return maximum ;
    }
    
    long long int accumulate(int arr[] , long long int n){
        long long int sum = 0 ;
        
        for(int i = 0 ; i < n ; i++){
            sum += arr[i] ;
        }
        return sum ;
    }
    
    
};