#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;


vector<int> getSecondOrderElements(int n, vector<int> arr) {
    vector<int> v ;
    int s1 = INT_MAX, s2 = INT_MAX, l1 = INT_MIN , l2 = INT_MIN;
    for(int i = 0 ; i <n ; i++){
        if(arr[i] > l1){
            l1 = arr[i] ;
        }
        if(arr[i] < s1){
            s1 = arr[i] ;
        }
        
   }
    
    for(int j= 0 ; j<n ; j++){
        
        if(arr[j] < s2  && arr[j] != s1){
            s2 = arr[j] ;
        }
        if(arr[j] > l2 && arr[j] != l1){
            l2 = arr[j ];
        }
   }
    v.push_back(l2) ;
    v.push_back(s2) ;

    return v ;
}
