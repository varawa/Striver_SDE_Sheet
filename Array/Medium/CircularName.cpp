#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>circle ;
        
        for(int i = 1 ; i <= n ; i++){
            circle.emplace_back(i) ;
        }
        int it = 0 ;

        while(circle.size() > 1){
            int remove = (it + k - 1)%(circle.size()) ;
            circle.erase(circle.begin() + remove) ;
            it = remove ;
        }
        return circle[0] ;
    }
};