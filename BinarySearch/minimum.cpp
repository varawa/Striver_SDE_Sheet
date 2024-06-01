#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0 ;
        int end = nums.size() - 1 ;

        int mid = (start + end)/2 ;

        int min = INT_MAX ;

        while(start <= end){
            cout<<nums[mid]<<endl ;
            if(nums[mid] < min){
                min = nums[mid] ;
            }
            else if(nums[start] <= nums[mid]){
                if(nums[start] < min)
                    min = nums[start] ;
                start = mid + 1 ;
            }
            else{
                if(nums[mid] < min)
                    min = nums[mid] ;
                end = mid - 1 ;
            }
            mid = (start +end)/2 ;
        }
        return min ;
    }
};