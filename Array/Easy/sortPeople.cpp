#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights){
        vector<pair<string , int>> res ;

        for(int i = 0 ; i < names.size() ; i++){
            pair<string , int>p ;
            p.first = names[i] ;
            p.second = heights[i] ;
            res.emplace_back(p) ;
        }

        sort(res.begin() , res.end() , [](pair<string , int>a , pair<string , int>b){
            return a.second > b.second ;
        });

        vector<string> ans ;
        for(int i = 0 ; i < res.size() ; i++)
            ans.emplace_back(res[i].first) ;
        
        return ans ;

    }  
};