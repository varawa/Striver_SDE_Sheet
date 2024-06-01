#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int start = 0 ;
	    int end = n - 1 ;
	    
	    int mid = (start + end)/2 ;
	    
	    int min = INT_MAX ;
	    int ind = -1 ;
	    
	    while(start <= end){
	        if(arr[mid] < min){
	            ind = mid ;
	            min = arr[mid] ;
	        }
	        else if(arr[mid] >= arr[start]){
	            if(min > arr[start]){
	                ind = start ;
	                min = arr[start] ;
	            }
	            start = mid + 1 ;
	        }
	        else{
	            if(min > arr[mid]){
	                ind = mid ;
	                min = arr[mid] ;
	            }
	            end = mid - 1 ;
	        }
	        mid = (start + end)/2 ;
	    }
	    return ind ;
	}

};