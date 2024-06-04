#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int minDays(vector<int>& nums, int m, int k) {
        if(nums.size() < m)
            return -1 ;
        if(nums.size() < k)
            return -1 ;
        if(nums.size() < m*k)
            return -1 ;

        long long int start = *min_element(nums.begin() , nums.end()) ;
        long long int end = *max_element(nums.begin() , nums.end()) ;

        long long int mid = (start + end)/2 ;
        
        while(start <= end){
            if(group(nums , mid , k , m)){
                end = mid - 1 ;
            }
            else{   
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
        }
        return start ;
    }

    bool group(vector<int> nums , long long int day ,int k , int m){
    
        for(long long int i = 0 ; i < nums.size() ; i++){
            if(nums[i] <= day){
               nums[i] = 0 ;
            }
        }

        long long int cons = 0 ;
        long long int count = 0 ;

        for(long long int j = 0 ; j < nums.size() ; j++){
            if(nums[j] == 0){
                count++ ;
                if(count == k){
                    cons += count/k ;
                    count = 0 ;
                }
            }
            else{
                count = 0 ;
            }
        }
        if(cons >= m){
            return true ;
        }
        return false ;
    }

};