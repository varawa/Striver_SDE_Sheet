#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int minSwaps(string brackets) {
        int swaps = 0 ;
        int imbalance = 0 ;

        for(auto& c : brackets){
            if(c == ']' && imbalance == 0){
                swaps++ ;
                imbalance++ ;
            }else if(c == ']')  
                imbalance-- ;
            else    
                imbalance++ ; 
        }

        return swaps;
    }
};