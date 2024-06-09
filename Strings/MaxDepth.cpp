#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    int maxDepth(string s) {
        int count = 0 ; 
        int max = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '('){
                count ++ ;
            }
            if(s[i] == ')'){
                if(count > max)
                    max = count ;
                count-- ;
            }
        }
        return max ;
    }
};