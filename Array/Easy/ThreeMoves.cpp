#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ;

        if(nums.size() <= 4)    return 0 ;

        int ans = INT_MAX ;

        int a = nums[1] ;
        int b = nums[nums.size() - 3] ;

        ans = min(ans , b - a) ;

        a = nums[2] ;
        b = nums[nums.size() - 2] ;
    
        ans = min(ans , b - a) ;

        a = nums[3] ;
        b = nums[nums.size() - 1] ;

        ans = min(ans , b - a) ;
    
        a = nums[0] ;
        b = nums[nums.size() - 4] ;

        ans = min(ans , b - a) ;
    
        return ans ;
    
    }

};