#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> res ;
        
        unordered_map<int , int> mpp ;

        for(int i = 0 ; i < nums.size() ; i++)
            mpp[nums[i]]++ ;
        
        for(auto item : mpp){
            if(item.second > n / 3)
                res.push_back(item.first) ;
        }

        return res ;
    }
};