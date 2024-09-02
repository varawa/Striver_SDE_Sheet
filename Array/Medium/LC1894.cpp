#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long int total = 0 ;
        for(auto item : chalk)
            total += item ;
        int final = k - total * (k/total) ;
        if(k%total == 0)    return 0 ;
        for(int i = 0 ; i < chalk.size() ; i++){
            if(chalk[i] > final)    return i ;
            final -= chalk[i] ;
        }
        return 0 ;
    }
};