#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "" ;
        
        sort(strs.begin() , strs.end()) ;

        if(strs.size() == 1){
            return strs[0] ;
        }
        char c ;
        bool flag = true ;
        for(int j = 0 ; j < strs[0].length() ; j++){
            for(int i = 1 ; i < strs.size() ; i++){
                if(strs[i-1][j] != strs[i][j]){
                    flag = false ;
                    break ;
                }
                c = strs[i][j] ;
            }
            if(flag == true)
                res += c ;
        }
        return res ;
    }
};