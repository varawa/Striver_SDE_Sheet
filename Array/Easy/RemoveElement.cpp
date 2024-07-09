#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int start = 0 ; 
        int end = nums.size() - 1 ;
        
        while(start <= end){
            if(nums[start] == val){
                if(nums[end] != val){
                    swap(nums[start] , nums[end]) ;
                    start++ ;
                }
                end-- ;
            }else
                start++ ;
        }

        return start ;
    }
};