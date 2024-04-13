#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    bool check(vector<int>& nums) {
        int x = 0 ;
        vector<int> original(nums.size()) ;
        while(nums.size() > x){
            for(int i = 0 ; i < nums.size() ; i++){
                original[i] = nums[(i+x)%nums.size()] ;
            }
            vector<int> check ; 
            int largest = INT_MIN ;
            for(int j = 0 ; j < nums.size(); j++){
                if(original[j] >= largest){
                    largest = original[j] ;
                    check.push_back(original[j]) ;
                }
            }
            if(check == original){
                return true ;
            }
            x ++ ;
        }
        return false ;
    }
};