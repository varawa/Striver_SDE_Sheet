#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> help ;
        for(auto item : arr){
            help.emplace_back(item) ;
        }

        sort(help.begin() , help.end()) ;

        unordered_map<int , int>mpp ;
        int rank = 0 ;
        for(int i = 0 ; i < help.size() ; i++)
            if(!mpp[help[i]]){
                rank++ ;
                mpp[help[i]] = rank ;
            }

        for(int i = 0 ; i < arr.size() ; i++)
            arr[i] = mpp[arr[i]] ;

        return arr ;
    }
};