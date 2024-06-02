#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0 ; 
        int end = nums.size() - 1 ;

        int mid = (start + end)/2 ;

        if(nums.size() == 1){
            return 0 ;
        }

        while(start <= end){
            if(mid == 0 && nums[mid + 1] < nums[mid]){
                return mid ;
            }
            else if(mid == nums.size() - 1 && nums[mid - 1] < nums[mid]){
                return mid ;
            }
            else if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]){
                return mid ;
            }
            else if(nums[mid + 1] > nums[mid]){
                start = mid + 1 ;
            }
            else{
                end = mid - 1 ;
            }
            mid = (start + end)/2 ;
        }
        return -1 ;
    }
};