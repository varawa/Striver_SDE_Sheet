#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0 ;
        int end = nums.size() - 1 ;
        int mid = (start + end)/2 ;
        if(target < nums[0]){
            return 0 ;
        }
        while(start <= end){
            if(nums[mid] == target){
                return mid ;
            }
            if(nums[mid] > target){
                end = mid - 1 ; 
            }
            else{
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
        }
        return mid + 1 ;
    }
};