#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans ;
        unordered_map<string, int>mpp1 ;
        string help = "" ;
        for(int i = 0 ; i < s1.length() ; i++){
            if(s1[i] == ' '){
                mpp1[help]++ ;
                help = "" ;
            }else{
                help += s1[i] ;
            }
        }
        mpp1[help]++ ;

        help = "" ;

        for(int i = 0 ; i < s2.length() ; i++){
            if(s2[i] == ' '){
                mpp1[help]++ ;
                help = "" ;
            }else{
                help += s2[i] ;
            }
        }
        mpp1[help]++ ;
    
    for(auto item : mpp1){
        if(item.second == 1)
            ans.push_back(item.first) ;
    }
    
        return ans ;
    }
};