#include<bits/stdc++.h>


using namespace std ;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int , int>mpp ;

        vector<int> ans ;

        for(int num : nums1)
            mpp[num]++ ;
        
        for(int i = 0 ; i < nums2.size() ; i++){
            if(mpp[nums2[i]] != 0){
                ans.emplace_back(nums2[i]) ;
                mpp[nums2[i]]-- ;
            }
        }
        return ans ;
    }
};