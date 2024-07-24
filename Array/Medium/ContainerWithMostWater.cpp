#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int maxArea(vector<int>& nums) {
        int area = 0 ;
        int left = 0 ;
        int right = nums.size() - 1 ;
        while(left <= right){
            int len = right - left ;
            area = max(area , min(nums[right] , nums[left]) * len) ;

            if(nums[left] < nums[right])    left++ ;
            else    right-- ;
        }
        return area ;
    }
};