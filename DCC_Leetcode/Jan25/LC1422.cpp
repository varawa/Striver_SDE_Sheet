#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int max = INT_MIN ;
        int point = 0 ;
        int current = 0 ;

        for(int i = 0 ; i < s.length() ; i++)
            if(s[i] == '1') current++ ;

        while(point < s.length() - 1){
            if(s[point] == '0') current += 1 ;
            
            else    current -= 1 ;

            if(current > max)   max = current ;

            point++ ;
        }

        return max ;
    }
};