#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n = a.size() ;
    int ans = 0 ;
    long long sum = 0, j = 0  ;
    for(int i = 0 ; i < n ; i++){
        sum += a[i] ;
        while(sum > k){
            sum -= a[j];
            j++;
        }
        if(k == sum && ans < i-j+1 ){
            ans = i-j+1 ;
        }
    }
    return ans ;
}