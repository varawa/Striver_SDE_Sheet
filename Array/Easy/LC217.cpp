#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return !(nums.size()==set(nums.begin(),nums.end()).size()) ;
    }
};