#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>
#include<numeric>

using namespace std ;

int findPages(vector<int>& arr, int n, int m) {

    if(m > arr.size()){
        return -1 ;
    }
    
    long long int start = *max_element(arr.begin() , arr.end()) ;
    long long int end = accumulate(arr.begin() , arr.end() , 0);

    long long int mid = (start + end)/2 ;

    while(start <= end){
        if(mins(arr ,mid) <= m){
            end = mid - 1 ;
        }
        else{
            start = mid + 1 ;
        }
        mid = (start + end)/2 ;
    }
    return start ;
}



long long int mins(vector<int> arr , long long int pages){
    long long int s = 0 ;
    long long int ans = 0 ;

    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] + s <= pages){
            s += arr[i] ;
        }
        else{
            ans++ ;
            s = arr[i] ;
        }
    }
    if(s > 0){
        ans++ ;
    }
    return ans ;
}
