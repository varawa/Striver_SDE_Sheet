#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0 ;
        int right = 0 ;
        
        int length = 0 ;
        int max = 0 ;

        int zero = 0 ;
        
        while(right < nums.size()){
            if(nums[right] == 0){
                zero++ ;
            }
            if(zero > k){
                if(nums[left] == 0) zero-- ;
                left++ ;
            }
            
            length = right - left + 1 ;

            if(length > max)
                max = length ;

            right++ ;
        }
        return max ;
    }
};