#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int x[256] = {} ;
        int y[256] = {} ;

        if(s.length() != t.length())    return false ;
 
        for(int i = 0 ; i < s.length() ; i++){
            if(x[s[i]] != y[t[i]])
                return false ;
            x[s[i]] = i + 1 ;
            y[t[i]] = i + 1 ;
        }

        return true ;
    }
};