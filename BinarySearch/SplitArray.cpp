#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>
#include<numeric>

using namespace std ;

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {

        if(k > nums.size()){
            return -1 ;
        }

        int start = *max_element(nums.begin() , nums.end()) ;
        int end = accumulate(nums.begin() , nums.end() , 0) ;

        int mid = (start + end)/2 ;

        while(start <= end){
            if(findK(nums , mid) <= k){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
        }
        return start ;
    }

    long long int findK(vector<int> nums , long long int sub){
        long long int sum = 0 ;
        long long int k = 0 ;
        int i = 0 ;
        for(i = 0 ; i < nums.size() ; i++){
            if(sum + nums[i] <= sub){
                sum += nums[i] ;
            }
            else{
                k++ ;
                sum = nums[i] ;
            }
        }
        if(sum > 0){
            k++ ;
        }
        
        return k ;
    }
};