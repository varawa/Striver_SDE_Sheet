#include<bits/stdc++.h>

using namespace std ;


class Solution {
public:
    int myAtoi(string s) {
        int i = 0 ;
        bool neg = false ;

        while(!isN(s[i])){
            if(s[i] == ' ') i++ ;
            else break ;
        }
        if(s[i] == '-' || s[i] == '+'){
            if(s[i] == '-') neg = true ;
            i++ ;
        }
        s = s.substr(i , s.length()) ;

        long long int ans = rec(s , 0 , 0) ;
        
        if(neg) ans = -1*ans ;

        if(ans > INT_MAX) return INT_MAX ;
        if(ans < INT_MIN) return INT_MIN ;

        return ans ;
    }

    long long int rec(string& s, int index, long long int current) {
        if (index >= s.length() || !isN(s[index])) 
            return current;
        
        long long int digit = conv(s[index]);
        
        if(current > (LLONG_MAX - digit)/10)
            return LLONG_MAX ;
        current = current * 10 + digit;
        
        return rec(s, index + 1, current);
    }

    bool isN(char c){
        if('0' <= c && c <= '9')
            return true ;
        return false ;
    }
    int conv(char c){
        if(!isN(c))
            return -1 ;
    
        return c - 48 ;
    }
};