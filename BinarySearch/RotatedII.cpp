#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0 ;
        int end = nums.size() - 1 ;

        int mid = (start + end)/2 ;
        
        while(start <= end){
            if(nums[start] == nums[mid] && mid > start){
                start ++ ;
                continue ;
            }
            if(nums[end] == nums[mid] && mid < end){
                end -- ;
                continue ;
            }
            
            if(nums[mid] == target){
                return true ;
            }
            else if(nums[mid] >= nums[start]){
                if(target >= nums[start] && target <= nums[mid]){
                    end = mid - 1 ;
                }
                else{
                    start = mid + 1 ;
                }
            }
            else{
                if(target >= nums[mid] && target <= nums[end]){
                    start = mid + 1 ;
                }
                else{
                    end = mid - 1 ;
                }
            }
            mid = (start + end)/2 ;
        }
        return false ;
    }
};