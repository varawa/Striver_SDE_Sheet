#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int>mpp ;
       
        for(auto item : s)
            mpp[item]++ ;
        
        sort(s.begin() , s.end() , [&mpp](char a , char b){
            if(mpp[a] == mpp[b])    return a > b ;
            return mpp[a] > mpp[b] ;
        }) ;
        
        return s ;
    }
    
};