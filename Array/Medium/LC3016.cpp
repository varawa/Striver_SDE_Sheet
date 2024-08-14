#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char , int>mpp ; 
        int ans = 0 ;
        int m = 1 ;

        for(int i = 0 ; i < word.length() ; i++)    mpp[word[i]]++ ;
        
        sort(word.begin() , word.end() , [&mpp](char a , char b){
            if(mpp[a] != mpp[b])
                return mpp[a] > mpp[b] ;
            return a > b ;
        }) ;
        mpp.clear() ;

        for(int i = 0 ; i < word.length() ; i++){
            if(!mpp.count(word[i]) && mpp.size() >= m * 8){
                m++ ;
            }
            mpp[word[i]]++ ;
            ans = ans + m ;
        }

        return ans ;
    }
};