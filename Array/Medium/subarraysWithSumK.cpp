#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0 ;
        unordered_map<int , int> mpp ;
        mpp[0] = 1 ;
        
        int sum = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i] ;
            if(mpp.count(sum - k) != 0) ans += mpp[sum - k] ;
            mpp[sum]++ ;
        }
        return ans ;
    }
};