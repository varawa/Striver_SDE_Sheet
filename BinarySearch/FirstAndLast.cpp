#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0 ;
        int end = nums.size() - 1 ;
        int mid = (start + end)/2 ;
        int index1 = -1 ;
        int index2 = -1 ;
        vector<int> v ;

        while(start <= end){
            if(nums[mid] == target){
                index1 = mid ;
                end = mid - 1 ;
            }
            else if(nums[mid] > target){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
            
        }

        start = 0 ;
        end = nums.size() - 1 ;
        mid = (start + end)/2 ;

        while(start <= end){
            if(nums[mid] == target){
                index2 = mid ;
                start = mid + 1 ;
            }
            if(nums[mid] > target){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
        }
        v.push_back(index1) ;
        v.push_back(index2) ;

        return v ;

    }
};