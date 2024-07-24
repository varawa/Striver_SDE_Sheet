#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> store ;

        for (int i = 0 ; i < nums.size() ; i++) {
            int mapped = 0 ;
            int temp = nums[i] ;
            int place = 1 ;
            
            if (temp == 0) {
                store.push_back({mapping[0] , i}) ;
                continue ;
            }
            
            while (temp != 0) {
                mapped = place * mapping[temp % 10] + mapped ;
                place *= 10 ;
                temp /= 10 ;
            }
            store.push_back({mapped , i}) ;
        }

        sort(store.begin() , store.end()) ;
        vector<int> ans ;
        for (auto pair : store) {
            ans.push_back(nums[pair.second]) ;
        }
        return ans ;
    }

};