class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int start = 0 ;
	    int end = n - 1 ;
	    
	    int mid = (start + end)/2 ;
	    
	    int index1 = -1 ;
	    int index2 = -1 ;
	    
	    while(start <= end){
	        if(arr[mid] == x){
	            index1 = mid ;
	            end = mid - 1 ;
	        }
	        else if(arr[mid] > x){
	            end = mid - 1 ;
	        }
	        else{
	            start = mid + 1 ;
	        }
	        mid = (start + end)/2 ;
	    }
	    
	    start = 0 ;
	    end = n - 1 ;
	    
	    mid = (start + end)/2 ;
	    
	    while(start <= end){
	        if(arr[mid] == x){
	            index2 = mid ;
	            start = mid + 1 ;
	        }
	        else if(arr[mid] > x){
	            end = mid - 1 ;
	        }
	        else{
	            start = mid + 1 ;
	        }
	        mid = (start + end)/2 ;
	    }
	    
	    if(index1 == -1){
	        return 0 ;
	    }
	    
	    return index2 - index1 + 1 ;
	}
};