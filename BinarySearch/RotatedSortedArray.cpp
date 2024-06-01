#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ind = 0 ;
        for(int i = 0 ; i < nums.size()/2 + 1 ; i++){
            if(nums[ind] < nums[i]){
                ind = i ;
            }
            if(nums[ind] < nums[nums.size() - i - 1]){
                ind = nums.size() - i - 1 ;
            }
        }
        if(nums[ind] == target){
            return ind ;
        }
        
        int start = -1 ;
        int end = -1 ;

        if(ind > 0 && target >= nums[0] && target <= nums[ind -1]){
            start = 0 ;
            end = ind - 1 ;
        }
        else if(ind < nums.size() - 1 && target >= nums[ind + 1] && target <= nums[nums.size() - 1]){
                if(ind < nums.size() - 1){
                    start = ind + 1 ; 
                    end = nums.size() - 1 ;
                }
                else{
                    return -1 ;
                }
            }
        else{
            return -1 ;
        }
        
        int mid = (start + end)/2 ;

        while(start <= end){
            if(nums[mid] == target){
                return mid ;
            }
            else if(nums[mid] > target){
                end = mid - 1 ;
            }
            else{
                start = mid + 1 ;
            }
            mid = (start + end)/2 ;
        }
        return -1 ;
    }
};