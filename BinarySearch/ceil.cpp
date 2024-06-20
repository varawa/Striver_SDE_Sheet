#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {

    sort(arr , arr + n) ;
    
    pair<int , int> p ;
    int start = 0 ;
    int end = n - 1 ;
    p.first = -1 ;
    p.second = -1 ;
    
    int mid = (start + end)/2 ;
    
    while(start <= end){
        
        if(arr[mid] == x){
            p.first = x ;
            p.second = x ;
            return p ;
        }
        if(arr[mid] > x){
            p.second = arr[mid] ;
            end = mid - 1 ;
        }
        else{
            p.first = arr[mid] ;
            start = mid + 1 ;
        }
        mid = (start + end)/2 ;
    }
    
    if(p.first == -1){
        p.second = arr[0] ;
    }
    return p ;
    
}