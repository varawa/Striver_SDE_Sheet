#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if(skill.size() % 2 != 0)   return -1 ;

        sort(skill.begin() , skill.end()) ;
        int start = 0 ; 
        int end = skill.size() - 1 ;

        int check = skill[start] + skill[end] ;
        long long sum = 0 ;

        while(start <= end){
            if(skill[start] + skill[end] != check)
                return -1 ;
            sum += skill[start]*skill[end] ;
            start++ ;
            end-- ;
        }

        return sum ;
    }
};