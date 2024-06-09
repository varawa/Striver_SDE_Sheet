#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    bool rotateString(string s, string goal) {
        string check = "" ;
        for(int i = 0 ; i < s.length() ; i++){
            for(int j = i + 1 ; j < s.length() ; j++){
                check += s[j] ;
            }
            for(int k = 0 ; k <= i ; k++){
                check += s[k] ;
            }
            if(check == goal){
                return true ;
            }
            check = "" ;
        }
        return false ;
    }
};