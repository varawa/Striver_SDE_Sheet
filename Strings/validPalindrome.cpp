#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    bool isPalindrome(string s) {
        string ret ;
        for(int i = 0 ; i < s.length() ; i++){
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                if(s[i] >= 'A' && s[i] <= 'Z')  s[i] += 32 ;
                ret += s[i] ;
            }
        }
        string check = ret ;
        for(int i = 0 ; i < check.length() / 2 ; i++)
            check[i] = check[check.length() - i - 1] ;
        return ret == check ;
    }
};