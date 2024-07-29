#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> help ;
        int i = 0 ; 
        int j = 0 ;

        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                help.push_back(nums1[i]) ; 
                i++ ;
            }else{
                help.push_back(nums2[j]) ; 
                j++ ;
            }
        }
        if(i >= m){
            while(j < n){
                help.push_back(nums2[j]) ;
                j++ ;
            }
        }else{
            while(i < m){
                help.push_back(nums1[i]) ;
                i++ ;
            }
        }

        i = 0 ;
        for(auto item : help){
            nums1[i] = item ;
            i++ ;
        }
    }
};