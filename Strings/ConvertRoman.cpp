#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0 ;
        int i = 0 ;
        while(i < s.length()){
            if(i < s.length() - 1){
                if(conv(s[i + 1]) > conv(s[i])){
                    ans = ans + conv(s[i + 1]) - conv(s[i]) ;
                    i = i + 2 ;
                }else{
                    ans = ans + conv(s[i]);
                    i++ ;
                }
            }else{
                ans = ans + conv(s[i]) ;
                i++ ;
            }
        }
        return ans ;
    }

    int conv(char c){
        if(c == 'I'){
            return 1 ;
        }
        if(c == 'V'){
            return 5 ;
        }
        if(c == 'X'){
            return 10 ;
        }
        if(c == 'L'){
            return 50 ;
        }
        if(c == 'C'){
            return 100 ;
        }
        if(c == 'D'){
            return 500 ;
        }
        if(c == 'M'){
            return 1000 ;
        }
        return -1 ;
    }
};