#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int , int> mpp ;

        for(auto num : nums)
            mpp[num]++ ;
        
        sort(nums.begin() , nums.end() , [&mpp](int a , int b){
            if(mpp[a] == mpp[b])  return a > b ;
            return mpp[a] < mpp[b] ;
        });

        return nums ;
    }
};