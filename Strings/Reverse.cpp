#include<iostream>
#include<math.h>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length() ;
        string res = "" ;
        string r = "" ;
        
        for(int i = 0 ; i < n ; i++){
            if(s[i] != ' '){
                r += s[i] ;
            }else{
                if(r != ""){
                    if(res != "")res = r + " " + res ;
                    else res = r ;
                    r = "" ;
                }
            }
        }

        if(r!= ""){
            if(res != "")
                res = r + " " + res ;
            else
                res = r ;
        }
    
        return res ;
    }

};