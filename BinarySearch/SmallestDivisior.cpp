#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;


class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long int max = *max_element(nums.begin() , nums.end()) ;

        int start = 1 ;
        int end = max ;

        long long int mid = (start + end)/2 ;

        while(start <= end){
            if(check(nums , mid) <= threshold){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
        }
        return start ;
    }

    long long int check(vector<int>nums , long long int num){
        long long int h = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]%num == 0){
                h += nums[i]/num ;
            }
            else{
                h = h + nums[i]/num + 1 ;
            }
        }
        return h ;
    }
};