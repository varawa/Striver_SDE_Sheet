#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res ;
        vector<int> ans ;
        map<int , int> mpp ;

        for(int i = 0 ; i < nums.size() ; i++)
            mpp[nums[i]]++ ;
        
        for(auto item : mpp)
            res.push_back(item.first) ;
        
        sort(res.begin() , res.end() , [&mpp](int a , int b){
            if(mpp[a] == mpp[b])    return a > b ;
            return mpp[a] > mpp[b] ;
        }) ;

        int i = 0 ;
        while(k > 0){
            ans.push_back(res[i]) ;
            i++ ;
            k-- ;
        }

        return ans ;
    }
};