#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin() , stalls.end()) ;
        
        long long int start = 1 ;
        long long int end = *max_element(stalls.begin() , stalls.end()) ;
        long long int mid = (start + end)/2 ;
        
        while(start <= end){
            if(check(stalls , mid , k)){
                start = mid + 1 ;
            }   
            else{
                end = mid - 1 ;
            }
            mid = (start + end)/2 ;
        }
        
        return end ;
    }
    
    bool check(vector<int> nums , long long int dist , long long int cow){
        long long int j = 0 ;
        long long int count = 1 ;
        for(long long int i = 1 ; i < nums.size() ; i++){
            if(nums[i] - nums[j] >= dist){
                count++ ;
                j = i ;
            }
        }
        return count >= cow ;
    }
};