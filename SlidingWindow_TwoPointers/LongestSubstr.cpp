#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0 ;
        int right = 0 ;

        int max = 0 ;
        int length = 0 ;

        int h[256] ;

        fill(h , h + 256 , -1) ;

        while(left < s.length() && right < s.length()){
            if(h[s[right]] != -1 && h[s[right]] >= left){
                left = h[s[right]] + 1 ;
            }
            length = right - left + 1 ;
            if(length > max){
                max = length ;
            }
            
            h[s[right]] = right ;
            right++ ;
            
        }
        return max ;
    }
};