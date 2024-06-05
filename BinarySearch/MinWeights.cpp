#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int start = *max_element(nums.begin() , nums.end()) ;
        int end = sum(nums) ;
        int mid = (start + end)/2 ;

        while(start <= end){
            if(check(nums , mid) <= days){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
        }
        return start ;
    }
    int check(vector<int>nums , int wt){ 

        int check = 0 ;
        int day = 0 ;

        for (int i = 0; i < nums.size(); i++) {
            if (check + nums[i] <= wt) {
                check += nums[i];
            } else {
                day++;
                check = nums[i]; 
            }
        }
        if (check > 0) {
            day++; 
        }
        return day ;
    }
    long long int sum(vector<int> nums){
        long long int sum = 0 ;
        for(long long int i = 0 ; i < nums.size() ; i++){
            sum += nums[i] ;
        }
        return sum ;
    }
};