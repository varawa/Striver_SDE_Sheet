#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0 ; 
        int end = 0 ;
        string ans ;

        while(start < s.length()){
            string curr = s.substr(start , end - start + 1) ;
            if(isPalindrome(curr)){
                if(ans.length() <= curr.length())
                    ans = curr ;
            }
            if(end == s.length() - 1){
                start++ ;
                end = start ;
            }else
                end++ ;
        }
        return ans ;
    }

    bool isPalindrome(string s){
        for(int i = 0 ; i < s.length() / 2 ; i++)
            if(s[i] != s[s.length() - i - 1])    return false ;

        return true ;
    }
};