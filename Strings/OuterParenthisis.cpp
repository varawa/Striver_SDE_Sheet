#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "" ;
        int count = 0 ; 

        for(int i = 1 ; i < s.length() ; i++){
            if(s[i] == '('){
                res += s[i] ;
                count++ ;
            }
            else{
                if(count != 0){
                    res += s[i] ;
                    count-- ;
                }
                else{
                    i++ ;
                    continue ;
                }
            }
        }
        return res ;
    }
};