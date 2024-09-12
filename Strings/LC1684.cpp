#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int>mpp ;
        int ans = words.size() ;

        for(auto item : allowed){
            mpp[item]++ ;
        }
        for(auto str : words){
            for(auto ch : str){
                if(!mpp.count(ch)){
                    ans-- ;
                    break ;
                }
            }
        }

        return ans ;
    }
};