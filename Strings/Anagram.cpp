#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;


class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false ;

        int n = s.length() ;

        int count1[256] = {} ;
        int count2[256] = {} ;

        for(int i = 0 ; s[i] && t[i] ; i++){
            count1[s[i]] ++ ;
            count2[t[i]] ++ ;
        }
        int j = 0 ;
        while(j < 256){
            if(count1[j] != count2[j])
                return false ;
            j++ ;
        }

        return true ;
    }
};