#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0 ;
        int end = nums.size() - 1 ;

        int mid = (start + end)/2 ;

        if(nums.size() == 1){
            return nums[0] ;
        }

        while(start <= end){
            if(mid == 0 && nums[mid + 1] != nums[mid]){
                return nums[mid] ;
            }
            else if(mid == nums.size() - 1 && nums[mid - 1] != nums[mid]){
                return nums[mid] ;
            }
            else if(nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid]){
                return nums[mid] ;
            }
            else if(nums[mid + 1] == nums[mid]){
                if(mid%2 != 0){
                    end = mid - 1 ;
                }
                else{
                    start = mid + 1 ;
                }
            }
            else{
                if(mid%2 != 0)
                    start = mid + 1 ;
                else
                    end = mid - 1 ;
            }
            mid = (start + end)/2 ;
        }
        return -1 ;
    }
};