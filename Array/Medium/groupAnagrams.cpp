#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res ;
        map<int , int> mpp ;

        for(int i = 0 ; i < nums.size() ; i++){
            if(!mpp.count(nums[i])){
                mpp[nums[i]] = 1 ;
            }else{
                mpp[nums[i]]++ ;
            }
        }

        for(auto item : mpp){
            if(k > 0){
                res.push_back(item.first) ;
                k-- ;
            }
        }

        return res ;
    }
};