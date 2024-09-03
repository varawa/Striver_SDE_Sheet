#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int getLucky(string s, int k) {
        string ans = "" ;
        for(int i = 0 ; i < s.length() ; i++)
            ans += to_string(s[i] - 96) ;

        int final = 0 ;
        while(k > 0){
            final = 0 ;
                for(int i = 0 ; i < ans.length() ; i++)
                    final += ans[i] - '0' ;
            ans = to_string(final) ;
            k-- ;
        }

        return final ;
    }
};