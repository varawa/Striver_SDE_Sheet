#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<limits.h>

using namespace std ;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length() ;
        for(int  i = n-1 ; i >= 0 ; i--){
            if(num[i] %2 != 0){
                string res = num.substr(0 , i + 1) ;
                return res ;
            }
        }

        return "" ;
    }

};