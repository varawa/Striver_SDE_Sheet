#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string , int> mpp ;

        for(auto item : arr)
            mpp[item]++ ;

        for(auto item : arr){
            if(mpp[item] == 1)  k-- ;
            if(k == 0)  return item ;
        }
        
        return "" ;

    }
};