#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int myAtoi(string s) {
        long long int ans = 0 ;
        int i = 0 ;

        bool isNegative = false ;
        bool flag = false ;

        while(i < s.length() && s[i] == ' '){
            i++ ;
        }
        if(s[i] == '+' || s[i] == '-'){
            if(s[i] == '-')
                isNegative = true ;
            i++ ;
        }
        
        while(i < s.length()){
            if(isN(s[i])){
                ans = ans*10 + conv(s[i]) ;
                i++ ;
                if(ans > INT_MAX){
                    if(isNegative)
                        return INT_MIN ;
                    return INT_MAX ;
                }
            }
            if(!isN(s[i]))
                break ;
        }

        if(isNegative)
            ans = ans*(-1) ;
        
        return ans ;
    }

    bool isN(char c){
        if('0' <= c && c <= '9')
            return true ;
        return false ;
    }
    int conv(char c){
        return c - 48 ;
        }
};